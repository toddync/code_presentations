<script lang="ts">
	import * as Command from '$lib/shad_components/ui/command/index.js'

	import Home from 'lucide-svelte/icons/home'
	import Slide from 'lucide-svelte/icons/presentation'

	import { navigate } from 'svelte-routing'
	const goto = (to: string) => ((open = false) || 1) && navigate(to)
	let open = false

	import { onMount } from 'svelte'
	onMount(() => {
		function handleKeydown(e: KeyboardEvent) {
			if (e.key.toLocaleLowerCase() === 'k' && (e.metaKey || e.ctrlKey)) {
				e.preventDefault()
				open = !open
			}
		}

		document.addEventListener('keydown', handleKeydown)
		return () => {
			document.removeEventListener('keydown', handleKeydown)
		}
	})
</script>

<Command.Dialog bind:open>
	<Command.Input placeholder="Search..." />
	<Command.List>
		<Command.Empty>No results found.</Command.Empty>
		<Command.Group heading="Pages">
			<Command.Item onSelect={() => goto('/')}>
				<Home />
				<span class="ml-1">Home</span>
			</Command.Item>
		</Command.Group>
		<Command.Separator />
		<Command.Group heading="Presentations">
			<Command.Item onSelect={() => goto('/BinarySearch_C')}>
				<Slide />
				<span class="ml-1">Binary Search in C</span>
			</Command.Item>
			<Command.Item onSelect={() => goto('/BubbleSort_C')}>
				<Slide />
				<span class="ml-1">Bubble Sort in C</span>
			</Command.Item>
		</Command.Group>
	</Command.List>
</Command.Dialog>
