<?php
class views_slidecontent_plugin_style_slidecontent extends views_plugin_style_list {
  
  function option_definition() {
    $options = parent::option_definition();
    $options['queue'] =  array('default' => 'under');
    $options['speed'] = array('default' => '2000');
    $options['items'] = array('default' => '2');
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    views_slidecontent_options_form($form, $form_state);
  }
}