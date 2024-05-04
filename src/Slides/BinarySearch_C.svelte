<script>
	import 'iconify-icon'
	import { Slide, Code } from '@components'
	import Output from '../components/output.svelte'
	import Presentation from '@lib/components/presentation.svelte'
</script>

<svelte:head>
	<title>Binary Search in C</title>
</svelte:head>

<Presentation class="bg-background">
	<Slide animate>
		<p class="font-bold text-8xl">Binary Search</p>
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
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" lines="all|5|6|7|8|all">
				{`
					#include <stdio.h>

					int main(){
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
						int end = sizeof(array) / sizeof(array[0]),
							start = 0,
							middle = end / 2,
							needle = 3;
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
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
						int end = sizeof(array) / sizeof(array[0]),
							start = 0,
							middle = end / 2,
							needle = 3;

						while(){}
					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="10">
				{`
					while(){

					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="10">
				{`
					while(array[middle] != needle){
						
					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<Slide animate>
			<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
				<Code lang="c" offset="10" lines="all|2-7|8|all">
					{`
						while(array[middle] != needle){
							if(array[middle] > needle){
	
							}else{
	
							}
	
							middle = (start + end) / 2;
						}
					`}
				</Code>
			</div>
		</Slide>
	</Slide>

	<Slide animate>
		<Slide animate>
			<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
				<Code lang="c" offset="10">
					{`
							while(array[middle] != needle){
								if(array[middle] > needle){
									end = middle - 1;
								}else{
		
								}
		
								middle = (start + end) / 2;
							}
						`}
				</Code>
			</div>
		</Slide>

		<Slide animate>
			<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
				<div class="text-start">
					<p>{`{`}</p>
					<div class="pl-20 space-y-3">
						<p class="flex">
							0,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="start"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>start</p>
							</span>
						</p>
						<p>1,</p>
						<p>2,</p>
						<p>3,</p>
						<p>4,</p>
						<p class="flex">
							5,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="middle"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>middle</p>
							</span>
						</p>
						<p>6,</p>
						<p>7,</p>
						<p>8,</p>
						<p class="flex">
							9
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="end"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>end</p>
							</span>
						</p>
					</div>
					<p>{`}`}</p>
				</div>
			</div>
		</Slide>

		<Slide animate>
			<div
				class="w-fit max-w-full mx-auto place-content-center no-scrollbar flex gap-10"
			>
				<div class="text-start">
					<p>{`{`}</p>
					<div class="pl-20 space-y-3">
						<p class="flex">
							0,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="start"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>start</p>
							</span>
						</p>
						<p>1,</p>
						<p>2,</p>
						<p>3,</p>
						<p>4,</p>
						<p class="flex">
							5,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="middle"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>middle</p>
							</span>
						</p>
						<p>6,</p>
						<p>7,</p>
						<p>8,</p>
						<p class="flex">
							9
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="end"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>end</p>
							</span>
						</p>
					</div>
					<p>{`}`}</p>
				</div>
				<p class="my-auto text-3xl pl-52">needle = 3</p>
			</div>
		</Slide>

		<Slide animate>
			<div
				class="w-fit max-w-full mx-auto place-content-center no-scrollbar flex gap-10"
			>
				<div class="text-start">
					<p>{`{`}</p>
					<div class="pl-20 space-y-3">
						<p class="flex">
							0,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="start"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>start</p>
							</span>
						</p>
						<p>1,</p>
						<p>2,</p>
						<p>3,</p>
						<p>4,</p>
						<p class="flex">
							5,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="middle"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>middle</p>
							</span>
						</p>
						<p>6,</p>
						<p>7,</p>
						<p>8,</p>
						<p class="flex">
							9
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="end"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>end</p>
							</span>
						</p>
					</div>
					<p>{`}`}</p>
				</div>
				<div class="my-auto">
					<p class="text-xl pl-52 pb-5">needle = 3</p>
					<p class="text-3xl pl-52">{`array[middle] > needle`}</p>
				</div>
			</div>
		</Slide>

		<Slide animate>
			<div
				class="w-fit max-w-full mx-auto place-content-center no-scrollbar flex gap-10"
			>
				<div class="text-start">
					<p>{`{`}</p>
					<div class="pl-20 space-y-3">
						<p class="flex">
							0,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="start"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>start</p>
							</span>
						</p>
						<p>1,</p>
						<p>2,</p>
						<p>3,</p>
						<p>4,</p>
						<div class="space-y-3 text-zinc-700">
							<p class="flex">
								5,
								<span
									class="my-auto text-base flex pl-3 content-center"
									data-id="middle"
								>
									<iconify-icon
										icon="tabler:chevron-left"
										class="h-fit my-auto"
									/>
									<p>middle</p>
								</span>
							</p>
							<p>6,</p>
							<p>7,</p>
							<p>8,</p>
							<p class="flex">
								9
								<span
									class="my-auto text-base flex pl-3 content-center"
									data-id="end"
								>
									<iconify-icon
										icon="tabler:chevron-left"
										class="h-fit my-auto"
									/>
									<p>end</p>
								</span>
							</p>
						</div>
					</div>
					<p>{`}`}</p>
				</div>
				<div class="my-auto">
					<p class="text-xl pl-52 pb-5">needle = 3</p>
					<p class="text-3xl pl-52">{`array[middle] > needle`}</p>
				</div>
			</div>
		</Slide>

		<Slide animate>
			<div
				class="w-fit max-w-full mx-auto place-content-center no-scrollbar flex gap-10"
			>
				<div class="text-start">
					<p>{`{`}</p>
					<div class="pl-20 space-y-3">
						<p class="flex">
							0,
							<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="start"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>start</p>
							</span>
						</p>
						<p>1,</p>
						<p>2,</p>
						<p>3,</p>
						<p class="flex">
							4,<span
								class="my-auto text-base flex pl-3 content-center"
								data-id="end"
							>
								<iconify-icon
									icon="tabler:chevron-left"
									class="h-fit my-auto"
								/>
								<p>end</p>
							</span>
						</p>
						<div class="space-y-3 text-zinc-700">
							<p class="flex">
								5,
								<span
									class="my-auto text-base flex pl-3 content-center"
									data-id="middle"
								>
									<iconify-icon
										icon="tabler:chevron-left"
										class="h-fit my-auto"
									/>
									<p>middle</p>
								</span>
							</p>
							<p>6,</p>
							<p>7,</p>
							<p>8,</p>
							<p>9</p>
						</div>
					</div>
					<p>{`}`}</p>
				</div>
				<div class="my-auto">
					<p class="text-xl pl-52 pb-5">needle = 3</p>
					<p class="text-3xl pl-52 pb-10">{`array[middle] > needle`}</p>
					<p class="text-3xl pl-52">end = middle - 1</p>
				</div>
			</div>
		</Slide>
	</Slide>

	<Slide animate>
		<div class="w-fit max-w-full mx-auto place-content-center no-scrollbar">
			<Code lang="c" offset="10">
				{`
							while(array[middle] != needle){
								if(array[middle] > needle){
									end = middle - 1;
								}else{
									start = middle + 1;
								}
		
								middle = (start + end) / 2;
							}
						`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl"
		>
			<Code lang="c">
				{`
					#include <stdio.h>

					int main(){
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
						int end = sizeof(array) / sizeof(array[0]),
							start = 0,
							middle = end / 2,
							needle = 3;

						while (array[middle] != needle){
							if(array[middle] > needle){
								end = middle - 1; 
							} else {
								start = middle + 1;
							}

							middle = (start + end) / 2;
						}
					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-4xl"
		>
			<Code lang="c">
				{`
					#include <stdio.h>

					int main(){
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
						int end = sizeof(array) / sizeof(array[0]),
							start = 0,
							middle = end / 2,
							needle = 3;

						while (array[middle] != needle && middle > start){
							if(array[middle] > needle){
								end = middle - 1; 
							} else {
								start = middle + 1;
							}

							middle = (start + end) / 2;
						}
					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-3xl"
		>
			<Code lang="c">
				{`
					#include <stdio.h>

					int main(){
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
						int end = sizeof(array) / sizeof(array[0]),
							start = 0,
							middle = end / 2,
							needle = 3;

						while (array[middle] != needle && middle > start){
							if(array[middle] > needle){
								end = middle - 1; 
							} else {
								start = middle + 1;
							}

							middle = (start + end) / 2;
						}

						printf("%d", array[middle]);
					}
				`}
			</Code>
		</div>
	</Slide>

	<Slide animate>
		<div
			class="w-fit max-w-full mx-auto place-content-center no-scrollbar text-3xl flex"
		>
			<Code lang="c" class="min-w-fit">
				{`
					#include <stdio.h>

					int main(){
						int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
						int end = sizeof(array) / sizeof(array[0]),
							start = 0,
							middle = end / 2,
							needle = 3;

						while (array[middle] != needle && middle > start){
							if(array[middle] > needle){
								end = middle - 1; 
							} else {
								start = middle + 1;
							}

							middle = (start + end) / 2;
						}

						printf("%d", array[middle]);
					}
				`}
			</Code>
			<Output class="ml-5">3</Output>
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
				\\[O(n) = log_{_{2}}(n) \\]
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
