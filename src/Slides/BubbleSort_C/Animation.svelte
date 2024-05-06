<script lang="js">
    // @ts-nocheck
	import { all, animate, signal } from '@motion'
	import Item from '../../components/Item.svelte'
    const sleep = ( ms) => new Promise(resolve => setTimeout(resolve, ms))
    
    let f = 46.56, s= 50, y = 35
    let texts = [
        signal({ x: f, y, class:"text-2xl", w:5, h: 5}),
        signal({x:48.2, y: y, color:"#000", w:5, h: 5, scale: 100}),
        signal({ x: s, y, class:"text-2xl", w:5, h: 5})
    ]


	let elements = [];
	let i = 8;
	let o = 4;

	animate(async () => {
        await sleep(3000)

        for(let i = 0; i<10; i++){
            elements[i] = signal({x:45, y: 45, w:5, h: 5, r: 10, bg: "#162570"})
        }
        await sleep(200)
        all(
            elements[0].to({text: "8"}, {duration: 0}),
            elements[1].to({text: "4"}, {duration: 0}),
            elements[2].to({text: "2"}, {duration: 0}),
            elements[3].to({text: "6"}, {duration: 0}),
            elements[4].to({text: "9"}, {duration: 0}),
            elements[5].to({text: "0"}, {duration: 0}),
            elements[6].to({text: "3"}, {duration: 0}),
            elements[7].to({text: "1"}, {duration: 0}),
            elements[8].to({text: "5"}, {duration: 0}),
            elements[9].to({text: "7"}, {duration: 0}),
        )
		elements.forEach(async (e, I) => await e.to({x: (I+1) * i + o}))
		await sleep(1000)

        await compare(">", 0, 1, 1, 2, 8, 4)
        await compare(">", 0, 2, 2, 3, 8, 2)
        await compare(">", 0, 3, 3, 4, 8, 6)
        await compare("<", 0, 4, 4, 5, 8, 9)
        await compare(">", 4, 5, 5, 6, 9, 0)
        await compare(">", 4, 6, 6, 7, 9, 3)
        await compare(">", 4, 7, 7, 8, 9, 1)
        await compare(">", 4, 8, 8, 9, 9, 5)
        await compare(">", 4, 9, 9, 10, 9, 7)
        
	})

    const compare = async (comp, n1, n2, _1, _2, t1, t2, skip) => {
        all(
            texts[0].to({x: _1 * i +o, y: 45, text: `§${t1}`},{duration: 0}),
            texts[2].to({x: _2 * i +o, y: 45, text: `§${t2}`},{duration: 0}),
            texts[0].to({x: f, y, color:"#fff"}),
            texts[1].to({text: "?", color: "#fff"}),
            texts[2].to({x: s , y, color: "#fff"})
        )
		await sleep(500)

        all(
            await texts[1].to({text: comp,scale: 140, color: "#fa0"}, {duration: skip ? 0 : 500}),
            await texts[1].to({scale: 100, color: "#000"}, {duration: skip ? 0 : 501})
        )
		
        all(
            texts[0].to({x: _1 *i +o, y: 45}),
            texts[2].to({x: _2 *i +o, y: 45})
        )
        await sleep(1000);

        if(comp == ">"){
            all(
                texts[0].to({x: (_1 + 1)*i +o, text:""},{duration: 0}),
                texts[2].to({x: (_2 + 1)*i +o, text: ""},{duration: 0}),
                elements[n2].to({x: _1 *i +o}),
                elements[n1].to({x: _2 *i +o}),
            )
            await sleep(1001)
        }
    }
</script>

<div class="relative bg-black h-screen w-screen overflow-hidden">
    &zwnj;
	{#each elements as item}
		<Item {item} class="text-white text-2xl"/>
	{/each}

    {#each texts as item}
		<Item {item} text class="bg-transparent text-zinc-300 text-4xl"/>
	{/each}
</div>