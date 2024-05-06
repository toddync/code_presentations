<script>
// @ts-nocheck

	import Badge from "@lib/shad_components/ui/badge/badge.svelte"
	import Button from "@lib/shad_components/ui/button/button.svelte"
	import * as Card from "@lib/shad_components/ui/card"

	import Slide from 'lucide-svelte/icons/presentation'
	import Magnify from "lucide-svelte/icons/search"
	import Command from "lucide-svelte/icons/command"
	
	import { showSearch } from "./stores/showSearch"	
	import { navigate } from "svelte-routing"

	const pages = [
		{title: "Bubble Sort in C", link:"/BubbleSort_C"},
		{title: "Binary Search in C", link:"/BinarySearch_C"}
	]
</script>

<svelte:head>
	<title>Home</title>
</svelte:head>

<header class="sticky top-0 flex h-16 justify-center items-center gap-4 border-b bg-background px-4 md:px-6">
	<Button variant="outline" class="flex gap-4 text-muted-foreground group"
		on:click={() => ($showSearch = !$showSearch)}
	>
		<Magnify class="h-4 text-foreground"/>
		Search contents
		<Badge variant="outline" class="flex gap-1 group-hover:scale-[115%] group-hover:border-red-900 transition-all">
			<Command class="w-4"/> 
			<span >
				+
			</span> 
			<span>
				K
			</span>
		</Badge>
	</Button>
</header>
<main>
	<section class="grid w-full pt-10 md:pt-16 gap-5">
		<h1 class="text-3xl md:text-5xl text-center">What's here?</h1>
		<p class="text-xl p-5 md:p-10 md:text-2xl text-center">Some presentations about algorithms that I'll use to teach my friends on the university</p>
		<hr class="h-1 w-5/6 mx-auto"/>
	</section>
	<div class="grid grid-cols-1 md:grid-cols-3 lg:grid-cols-4 p-10 gap-3">

		{#each pages as page}	
			<div on:click={() => navigate(page.link)}>
				<Card.Root class="min-h-20 group hover:scale-105 transition cursor-pointer">
					<Card.Header class="h-full">
						<Card.Title class="flex gap-2 h-full items-center">
							<p class="max-w-5/6">
								{page.title}
							</p>
							<Slide class="ml-auto min-w-5 text-muted-foreground group-hover:text-foreground"/>
						</Card.Title>
					</Card.Header>
				</Card.Root>
			</div>
		{/each}
	</div>
</main>