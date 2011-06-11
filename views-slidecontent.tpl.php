<?php
/**
 * @params 
 *   $view: The view object.
 *   $options: The settings option for plugin.
 *   $rows: The result rows.
 * For more information, Please see the views doc.
 */
?>
<?php 
$first = 1;
$count = count($rows);
?>
<div class="'views-slide-content' views-<?php print $view->name?> views-<?php print $view->name . '-' . $view->current_display ?>">
  <?php foreach ($rows as $row):?>
    <li class="<?php print $first == 1 ? 'first' : ''?> row <?php print $first == $count ? 'end' : ''?>"><?php print $row;?></li>
    <?php
      $first ++;
    ?>
  <?php endforeach;?>
</div>