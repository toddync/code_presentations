<script>
    delete $$restProps.cords
    delete $$restProps.viewBox
</script>

<svg viewBox={$$props.cords} {...$$restProps}>
    <slot />
</svg>