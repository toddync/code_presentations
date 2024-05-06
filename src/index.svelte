<script>
	import Search from './components/Search.svelte'
	
	import BubbleSortC from './Slides/BubbleSort_C/index.svelte'
	import BinarySearchC from './Slides/BinarySearch_C.svelte'
	import Home from './Home.svelte'

	import { Route, Router } from 'svelte-routing'
	export let url = ''
	
	document.documentElement.classList.add('dark')
</script>

<link rel="stylesheet" href="src/app.css" />

<Search/>

<Router {url}>
	<Route path="/" component={Home} />
	<Route path="/BubbleSort_C" component={BubbleSortC} />
	<Route path="/BinarySearch_C" component={BinarySearchC} />
</Router>
