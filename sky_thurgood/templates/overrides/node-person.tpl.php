<?php
// $Id$

/**
 * @file
 * Outputs contents of nodes
 *
 * @see template_preprocess_node(), preprocess/preprocess-node.inc
 * http://api.drupal.org/api/function/template_preprocess_node/6
 */
?>

<?php if ($teaser) { ?>
<div<?php print $node_attributes; ?>>
    <div class="meta">
      <?php if ($submitted): ?>
      <?php print $picture; ?>
      <?php endif; ?>
      <?php if ($title): ?>
        <h2><a href="<?php print 'http://'.$_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI']; ?>" title="<?php print $title; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php if ($node->field_portrait[0][filepath]): ?>
      <img class="profheader" src="<?php print 'http://'.$_SERVER['HTTP_HOST'].'/'.$node->field_portrait[0][filepath]; ?>" alt="<?php print $title; ?>" title="<?php print $title; ?>">
      <?php endif; ?>
      <?php if ($node->field_jobtitle[0][value]): ?>
      <p class="job"><?php print $node->field_jobtitle[0][value]; ?></p>
           <?php if ($node->field_organization[0][nid]): ?>
           <?php $relationship = node_load($node->field_organization[0][nid]); ?>
           <?php $path = drupal_lookup_path("alias", "user/".$relationship->uid); ?>
           <p class="organization"><a href="<?php print 'http://'.$_SERVER['HTTP_HOST'].'/'.$path; ?>" title="<?php print $relationship->title; ?>"><?php print $relationship->title; ?></a></p>
           <?php endif; ?>
      <?php endif; ?>
      <?php if ($terms): ?>
        <div class="terms">
	<p>Tags:</p>
          <?php print $terms; ?>
        </div>
      <?php endif; ?>
      <?php if ($submitted): ?>
        <p><?php print $submitted; ?></p>
      <?php endif; ?>
  <div class="content clearfix">
    <?php print $content; ?>
  </div>
  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>
    </div>
</div>

<?php }
/* Everything after the following line is the template for the full node display */
else { ?>

<div<?php print $node_attributes; ?>>
    <div class="meta">
      <?php if ($submitted): ?>
      <?php print $picture; ?>
      <?php endif; ?>
      <?php if ($title): ?>
        <h2><a href="<?php print $node_url; ?>" title="<?php print $title; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php if ($terms): ?>
        <div class="terms">
	<p>Tags:</p>
          <?php print $terms; ?>
        </div>
      <?php endif; ?>
      <?php if ($submitted): ?>
        <p><?php print $submitted; ?></p>
      <?php endif; ?>
    </div>
  <div class="content clearfix">
    <?php print $content; ?>
  </div>
  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>
</div>
<?php } ?>
