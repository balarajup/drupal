<?php
/**
 * @file
 * movies.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function movies_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:movies/1
  $menu_links['main-menu:movies/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'movies/1',
    'router_path' => 'movies',
    'link_title' => 'Telugu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:movies/2
  $menu_links['main-menu:movies/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'movies/2',
    'router_path' => 'movies',
    'link_title' => 'Tamil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:movies/3
  $menu_links['main-menu:movies/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'movies/3',
    'router_path' => 'movies',
    'link_title' => 'Hindi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hindi');
  t('Home');
  t('Tamil');
  t('Telugu');


  return $menu_links;
}
