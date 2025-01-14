<?php

/**
 * @file
 * Bootstrap 4-8 template for Display Suite.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">

<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<div class="row">
<<?php print $left_wrapper; ?> class="<?php if (!empty($right)): ?>col-sm-8 <?php else :?>col-sm-12<?php endif; ?> <?php print $left_classes; ?>">
<?php print $left; ?>
</<?php print $left_wrapper; ?>>

<?php if (!empty($right)): ?>
<<?php print $right_wrapper; ?> class="col-sm-4 <?php print $right_classes; ?>">
<?php print $right; ?>
</<?php print $right_wrapper; ?>>
<?php endif; ?>

</div>
</<?php print $layout_wrapper ?>>


<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
