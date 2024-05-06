<script>
    let item = $$props.item

    delete $$restProps.item.w
    delete $$restProps.item.h
    delete $$restProps.item.x
    delete $$restProps.item.y

</script>

<div
class="origin-center content-center justify-center text-center {$$props.class} {$item.class}"
style={`
        z-index: 100;
        position: absolute;
        
        width: ${$item.w}vw;
        height: ${$item.h}vw;
        
        top: ${$item.y}vh;
        left: ${$item.x}vw;
        
        background: ${$item.bg};
        color: ${$item.color};
        
        border-radius: ${$item.r}%;
        
        ${$item.scale > 0 && `scale: ${$item.scale}%;`}
        `}
    {...$$restProps.item}
    >
    {$item.text?.replace("§","")}
</div>