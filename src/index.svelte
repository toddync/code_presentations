<script lang="ts">
	import BubbleSortC from './Slides/BubbleSort_C.svelte'
	import BinarySearchC from './Slides/BinarySearch_C.svelte'
	import Search from './components/Search.svelte'

	document.documentElement.classList.add('dark')

	import { Route, Router } from 'svelte-routing'
	import Home from './Home.svelte'
	export let url = ''
</script>

<link rel="stylesheet" href="src/app.css" />

<Search />

<Router {url}>
	<Route path="/" component={Home} />
	<Route path="/BubbleSort_C" component={BubbleSortC} />
	<Route path="/BinarySearch_C" component={BinarySearchC} />
</Router>
