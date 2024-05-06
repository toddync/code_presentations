<div
	class={'bg-black/70 rounded-xl overflow-hidden text-left text-xl min-w-[400px] h-fit ' +
		$$props.class}
	data-id="output"
>
	<div class="w-full bg-gray-700 p-2 flex gap-2">
		<div class="bg-red-500 size-4 rounded-full" />
		<div class="bg-yellow-500 size-4 rounded-full" />
		<div class="bg-green-500 size-4 rounded-full" />
	</div>
	<p data-id="output-text" class="m-3">
		<slot />
	</p>
</div>
