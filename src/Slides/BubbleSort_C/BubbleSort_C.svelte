<script>
	import Presentation from '@lib/components/presentation.svelte'
	import { Slide, Code } from '@components'
	import Output from '../../components/Output.svelte'
	import Animation from './Animation.svelte'
</script>

<svelte:head>
	<title>Bubble Sort in C</title>
</svelte:head>

<Presentation class="bg-background p-0">
	<Slide animate>
		<p class="font-bold text-8xl">Bubble Sort</p>
		<p class="font-bold text-5xl pt-1">in C</p>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c">
				{`
						#include <stdio.h>
	
						int main(){
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c">
				{`
						#include <stdio.h>
	
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto mt-16 no-scrollbar">
			<Code lang="c" offset="3" class="min-w-fit">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]);
							size--;
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="3" class="min-w-fit">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								printf("%d, ", array[I]);
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="3" class="min-w-fit">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								printf("%d, ", array[I]);
							}
						}
					`}
			</Code>
			<Output>8, 4, 2, 6, 9, 0, 3, 1, 5, 7,</Output>
		</div>
	</Slide>

	<Slide>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="3" class="min-w-fit" lines="all|4|6-8">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								printf("%d, ", array[I]);
							}
						}
					`}
			</Code>

			<Output>8, 4, 2, 6, 9, 0, 3, 1, 5,</Output>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="3" class="min-w-fit">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								printf("%d, ", array[I]);
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="3" class="min-w-fit" lines="all|3|8-9|9|11-12|all">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int A, B;
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								A = array[I];
								B = array[I + 1];
	
								if(A > B){
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							A = array[I];
							B = array[I + 1];
	
							if(A > B){
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							A = array[I];
							B = array[I + 1];
	
							if(A > B){
								array[I] = B;
								array[I + 1] = A;
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							A = array[I];
							B = array[I + 1];
	
							if(A > B){
								array[I] = B;
								array[I + 1] = A;
							}
						}
						
						for(int I = 0; I <= size; I++){
							printf("%d, ", array[I]);
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							A = array[I];
							B = array[I + 1];
	
							if(A > B){
								array[I] = B;
								array[I + 1] = A;
							}
						}
	
						for(int I = 0; I <= size; I++){
							printf("%d, ", array[I]);
						}
					`}
			</Code>
			<Output>4, 2, 6, 8, 0, 3, 1, 5, 7, 9,</Output>
		</div>
	</Slide>

	<Slide>
		<Slide>
			
			<div
				class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
			>
				<Output>8, 4, 2, 6, 9, 0, 3, 1, 5, 7,</Output>
				<svg
					class="my-auto fill-white"
					width="24"
					height="24"
					xmlns="http://www.w3.org/2000/svg"
					fill-rule="evenodd"
					clip-rule="evenodd"
					><path
						d="M21.883 12l-7.527 6.235.644.765 9-7.521-9-7.479-.645.764 7.529 6.236h-21.884v1h21.883z"
					/></svg
				>
				<Output>4, 2, 6, 8, 0, 3, 1, 5, 7, 9,</Output>
			</div>
		</Slide>

		<Slide>
			<video class="size-full" controls>
				<source src="src/assets/BubbleSort.mp4" type="video/mp4" />
			</video>
		</Slide>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							A = array[I];
							B = array[I + 1];
	
							if(A > B){
								array[I] = B;
								array[I + 1] = A;
							}
						}
	
						for(int I = 0; I <= size; I++){
							printf("%d, ", array[I]);
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit" lines="all|1,9|all">
				{`
						for(int I = 0; I < size; I++){
							A = array[I];
							B = array[I + 1];
	
							if(A > B){
								array[I] = B;
								array[I + 1] = A;
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							for(int J = 0; J < size; J++){
								A = array[J];
								B = array[J + 1];
	
								if(A > B){
									array[J] = B;
									array[J + 1] = A;
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							for(int J = 0; J < size; J++){
								A = array[J];
								B = array[J + 1];
	
								if(A > B){
									array[J] = B;
									array[J + 1] = A;
								}
							}
						}
	
						for(int I = 0; I <= size; I++){
							printf("%d, ", array[I]);
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit">
				{`
						for(int I = 0; I < size; I++){
							for(int J = 0; J < size; J++){
								A = array[J];
								B = array[J + 1];
	
								if(A > B){
									array[J] = B;
									array[J + 1] = A;
								}
							}
						}
	
						for(int I = 0; I <= size; I++){
							printf("%d, ", array[I]);
						}
					`}
			</Code>
			<Output>0, 1, 2, 3, 4, 5, 6, 7, 8, 9,</Output>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="9" class="min-w-fit" lines="all|2|all">
				{`
						for(int I = 0; I < size; I++){
							for(int J = 0; J < size - I; J++){
								A = array[J];
								B = array[J + 1];
	
								if(A > B){
									array[J] = B;
									array[J + 1] = A;
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar flex gap-5 text-3xl"
		>
			<Code lang="c" class="min-w-fit my-auto">
				{`
						#include <stdio.h>
	
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int A, B;
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								for(int J = 0; J < size - I; J++){
									A = array[J];
									B = array[J + 1];
	
									if(A > B){
										array[J] = B;
										array[J + 1] = A;
									}
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="3" class="min-w-fit">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int A, B;
							int size = sizeof(array) / sizeof(array[0]);
							size--;
	
							for(int I = 0; I < size; I++){
								for(int J = 0; J < size - I; J++){
									A = array[J];
									B = array[J + 1];
	
									if(A > B){
										array[J] = B;
										array[J + 1] = A;
									}
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" offset="3" class="min-w-fit" lines="all|4|8-12|all">
				{`
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]) - 1,
								temp;
	
							for(int I = 0; I < size; I++){
								for(int J = 0; J < size - I; J++){
									if(array[J] > array[J + 1]){
										temp = array[J]
										array[J] = array[J + 1]
										array[J + 1] = temp;
									}
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl flex gap-5"
		>
			<Code lang="c" class="min-w-fit my-auto">
				{`
						#include <stdio.h>
	
						int main(){
							int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
							int size = sizeof(array) / sizeof(array[0]) - 1,
								temp;

							for(int I = 0; I < size; I++){
								for(int J = 0; J < size - I; J++){
									if(array[J] > array[J + 1]){
										temp = array[J]
										array[J] = array[J + 1]
										array[J + 1] = temp;
									}
								}
							}
						}
					`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">
			<p>Big O notation</p>
		</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">
			<p>Big O notation</p>
			<p data-id="math">
				{`
				\\[O(n) = {n \\times (n-1)\\over 2} \\]
				`}
			</p>
		</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">
			<p data-id="math">
				{`
				\\[O(n) = {n \\times (n-\\cancel{1})\\over \\cancel{2}} \\]
				`}
			</p>
		</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">
			<p data-id="math">
				{`
				\\[O(n) = {n \\times (n)} \\]
				`}
			</p>
		</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">
			<p data-id="math">
				{`
				\\[O(n) = n^{2}\\]
				`}
			</p>
		</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">End</div>
	</Slide>

	<Slide animate>
		<div class="max-w-full mx-auto place-content-center no-scrollbar">
			Any questions?
		</div>
	</Slide>
</Presentation>