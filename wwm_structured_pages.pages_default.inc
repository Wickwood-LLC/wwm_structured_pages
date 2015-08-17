<?php
/**
 * @file
 * wwm_structured_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wwm_structured_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles_wwm_1';
  $page->task = 'page';
  $page->admin_title = 'Article Posts';
  $page->admin_description = 'The primary disambiguation page for all things articles-related. Think of as the primary page of a blog or news section of your site.';
  $page->path = 'articles/!year/!month/!day';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Articles',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'day' => array(
      'id' => 3,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_1__panel_context_f1c50cd4-9b6b-4f8d-ad0c-5bfca34e51a8';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'By day',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles/*/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles
%year:html_safe
%month:uppercase_words_html_safe
%day:html_safe',
    'panels_breadcrumbs_paths' => 'articles
articles/%year:raw
articles/%year:raw/%month:raw
articles/%year:raw/%month:raw/%day:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'selby_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba534b21-e0a7-4b60-af8c-c4fad3f110f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a28d2d4d-83fa-45f3-ae5b-71434ea98879';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-featured_article_posts_day';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'title_1' => '',
    ),
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured_half_width',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a28d2d4d-83fa-45f3-ae5b-71434ea98879';
  $display->content['new-a28d2d4d-83fa-45f3-ae5b-71434ea98879'] = $pane;
  $display->panels['contentfooter'][0] = 'new-a28d2d4d-83fa-45f3-ae5b-71434ea98879';
  $pane = new stdClass();
  $pane->pid = 'new-50a4cff0-aeac-4b94-b64b-05f1c8c31230';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-list_articles_from_day';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'Is Featured' => 'All',
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '50a4cff0-aeac-4b94-b64b-05f1c8c31230';
  $display->content['new-50a4cff0-aeac-4b94-b64b-05f1c8c31230'] = $pane;
  $display->panels['contentfooter'][1] = 'new-50a4cff0-aeac-4b94-b64b-05f1c8c31230';
  $pane = new stdClass();
  $pane->pid = 'new-1206a1c3-4087-4735-841f-581d59c7a298';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-article_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
      'created' => 0,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Archive',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1206a1c3-4087-4735-841f-581d59c7a298';
  $display->content['new-1206a1c3-4087-4735-841f-581d59c7a298'] = $pane;
  $display->panels['sidebar'][0] = 'new-1206a1c3-4087-4735-841f-581d59c7a298';
  $pane = new stdClass();
  $pane->pid = 'new-757f82b0-8082-445f-97bd-6e84faec1315';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-popular_article_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '757f82b0-8082-445f-97bd-6e84faec1315';
  $display->content['new-757f82b0-8082-445f-97bd-6e84faec1315'] = $pane;
  $display->panels['sidebar'][1] = 'new-757f82b0-8082-445f-97bd-6e84faec1315';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-50a4cff0-aeac-4b94-b64b-05f1c8c31230';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_1__panel_context_a1a36b65-f13e-476e-a0a3-c856096eeb1d';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'By month',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles
%year:html_safe
%month:uppercase_words_html_safe',
    'panels_breadcrumbs_paths' => 'articles
articles/%year:raw
articles/%year:raw/%month:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'selby_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Articles from %year:raw/%month:raw';
  $display->uuid = 'ba534b21-e0a7-4b60-af8c-c4fad3f110f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d5d2d98-72c4-4829-9a5c-9867957d27f1';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-featured_article_posts_month';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'title_1' => '',
    ),
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured_half_width',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d5d2d98-72c4-4829-9a5c-9867957d27f1';
  $display->content['new-9d5d2d98-72c4-4829-9a5c-9867957d27f1'] = $pane;
  $display->panels['contentfooter'][0] = 'new-9d5d2d98-72c4-4829-9a5c-9867957d27f1';
  $pane = new stdClass();
  $pane->pid = 'new-bab1234c-5698-40a4-ba99-ee3d5bdb3a9a';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-list_articles_from_month';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'Is Featured' => 'All',
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bab1234c-5698-40a4-ba99-ee3d5bdb3a9a';
  $display->content['new-bab1234c-5698-40a4-ba99-ee3d5bdb3a9a'] = $pane;
  $display->panels['contentfooter'][1] = 'new-bab1234c-5698-40a4-ba99-ee3d5bdb3a9a';
  $pane = new stdClass();
  $pane->pid = 'new-de234e19-ffff-4945-af8b-f6e934f2ef9a';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-article_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
      'created' => 0,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Archive',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'de234e19-ffff-4945-af8b-f6e934f2ef9a';
  $display->content['new-de234e19-ffff-4945-af8b-f6e934f2ef9a'] = $pane;
  $display->panels['sidebar'][0] = 'new-de234e19-ffff-4945-af8b-f6e934f2ef9a';
  $pane = new stdClass();
  $pane->pid = 'new-3e395644-1e15-481b-b540-556fbb0e8355';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-popular_article_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3e395644-1e15-481b-b540-556fbb0e8355';
  $display->content['new-3e395644-1e15-481b-b540-556fbb0e8355'] = $pane;
  $display->panels['sidebar'][1] = 'new-3e395644-1e15-481b-b540-556fbb0e8355';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-bab1234c-5698-40a4-ba99-ee3d5bdb3a9a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_1__panel_context_2551d01c-bc23-483a-a092-24beb7b81633';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'By year',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles
%year:html_safe',
    'panels_breadcrumbs_paths' => 'articles
articles/%year:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'selby_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Articles from %year:raw';
  $display->uuid = 'ba534b21-e0a7-4b60-af8c-c4fad3f110f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6984fe69-9099-43c6-87a8-0b22b650e570';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-featured_article_posts_year';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'title_1' => '',
    ),
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured_half_width',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6984fe69-9099-43c6-87a8-0b22b650e570';
  $display->content['new-6984fe69-9099-43c6-87a8-0b22b650e570'] = $pane;
  $display->panels['contentfooter'][0] = 'new-6984fe69-9099-43c6-87a8-0b22b650e570';
  $pane = new stdClass();
  $pane->pid = 'new-e40e6f8d-1fac-495f-be74-4008904791d5';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-list_articles_from_year';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'Is Featured' => 'All',
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e40e6f8d-1fac-495f-be74-4008904791d5';
  $display->content['new-e40e6f8d-1fac-495f-be74-4008904791d5'] = $pane;
  $display->panels['contentfooter'][1] = 'new-e40e6f8d-1fac-495f-be74-4008904791d5';
  $pane = new stdClass();
  $pane->pid = 'new-8689499c-78d5-4f6a-82af-55ccf07ba76b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-article_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
      'created' => 0,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Archive',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8689499c-78d5-4f6a-82af-55ccf07ba76b';
  $display->content['new-8689499c-78d5-4f6a-82af-55ccf07ba76b'] = $pane;
  $display->panels['sidebar'][0] = 'new-8689499c-78d5-4f6a-82af-55ccf07ba76b';
  $pane = new stdClass();
  $pane->pid = 'new-6a3bcecc-3ec4-4c55-a713-fd3caf5c75bf';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-popular_article_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6a3bcecc-3ec4-4c55-a713-fd3caf5c75bf';
  $display->content['new-6a3bcecc-3ec4-4c55-a713-fd3caf5c75bf'] = $pane;
  $display->panels['sidebar'][1] = 'new-6a3bcecc-3ec4-4c55-a713-fd3caf5c75bf';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-e40e6f8d-1fac-495f-be74-4008904791d5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_1__panel_context_efdd6ab2-e7fb-4b5a-ab95-a49d89c732dd';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'All',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'selby_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Articles';
  $display->uuid = 'ba534b21-e0a7-4b60-af8c-c4fad3f110f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d104f2e7-df32-4879-a0ae-e137c0f49b55';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-featured_article_posts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'title_1' => '',
    ),
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured_half_width',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd104f2e7-df32-4879-a0ae-e137c0f49b55';
  $display->content['new-d104f2e7-df32-4879-a0ae-e137c0f49b55'] = $pane;
  $display->panels['contentfooter'][0] = 'new-d104f2e7-df32-4879-a0ae-e137c0f49b55';
  $pane = new stdClass();
  $pane->pid = 'new-de366bdf-93ad-44dd-83b6-bb549bc42558';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-list_article_posts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de366bdf-93ad-44dd-83b6-bb549bc42558';
  $display->content['new-de366bdf-93ad-44dd-83b6-bb549bc42558'] = $pane;
  $display->panels['contentfooter'][1] = 'new-de366bdf-93ad-44dd-83b6-bb549bc42558';
  $pane = new stdClass();
  $pane->pid = 'new-725faf38-656d-47ba-a1a1-f42d1f671e22';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-article_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
      'created' => 0,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Archive',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '725faf38-656d-47ba-a1a1-f42d1f671e22';
  $display->content['new-725faf38-656d-47ba-a1a1-f42d1f671e22'] = $pane;
  $display->panels['sidebar'][0] = 'new-725faf38-656d-47ba-a1a1-f42d1f671e22';
  $pane = new stdClass();
  $pane->pid = 'new-8ea925b6-33f0-4d7f-8cfa-84d33a12cbb7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles-popular_article_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8ea925b6-33f0-4d7f-8cfa-84d33a12cbb7';
  $display->content['new-8ea925b6-33f0-4d7f-8cfa-84d33a12cbb7'] = $pane;
  $display->panels['sidebar'][1] = 'new-8ea925b6-33f0-4d7f-8cfa-84d33a12cbb7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles_wwm_1'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles_wwm_2';
  $page->task = 'page';
  $page->admin_title = 'Articles list';
  $page->admin_description = 'List of all Articles in the site.';
  $page->path = 'articles/!year/!month/!day';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Articles test',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'day' => array(
      'id' => 3,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_2__panel_context_654dd9de-1040-4636-add4-04e4bd888c6b';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Articles by Day',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles/*/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles
%year:html_safe
%month:html_safe',
    'panels_breadcrumbs_paths' => 'articles
articles/%year:html_safe
articles/%year:html_safe/%month:html_safe',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-200a32b2-af80-4f38-a18e-0ec561c4152b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '200a32b2-af80-4f38-a18e-0ec561c4152b';
  $display->content['new-200a32b2-af80-4f38-a18e-0ec561c4152b'] = $pane;
  $display->panels['content'][0] = 'new-200a32b2-af80-4f38-a18e-0ec561c4152b';
  $pane = new stdClass();
  $pane->pid = 'new-bbb92b81-14d9-49f7-abc1-5a8ec8e90355';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '0',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 0,
      'title' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Articles Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bbb92b81-14d9-49f7-abc1-5a8ec8e90355';
  $display->content['new-bbb92b81-14d9-49f7-abc1-5a8ec8e90355'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-bbb92b81-14d9-49f7-abc1-5a8ec8e90355';
  $pane = new stdClass();
  $pane->pid = 'new-c4d0643f-f831-4ad3-922e-a2987313ec1f';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c4d0643f-f831-4ad3-922e-a2987313ec1f';
  $display->content['new-c4d0643f-f831-4ad3-922e-a2987313ec1f'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-c4d0643f-f831-4ad3-922e-a2987313ec1f';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-200a32b2-af80-4f38-a18e-0ec561c4152b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_2__panel_context_d9a6fb99-3fe5-40d3-9ed5-3173f069c33c';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Articles by Month',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles
%year:html_safe',
    'panels_breadcrumbs_paths' => 'articles
articles/%year:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60b401ff-3d6b-4770-b294-3f78951fcf97';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '60b401ff-3d6b-4770-b294-3f78951fcf97';
  $display->content['new-60b401ff-3d6b-4770-b294-3f78951fcf97'] = $pane;
  $display->panels['content'][0] = 'new-60b401ff-3d6b-4770-b294-3f78951fcf97';
  $pane = new stdClass();
  $pane->pid = 'new-b22c11aa-0ea5-49d4-b0aa-ab0eb7d65fb9';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'name' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Articles Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b22c11aa-0ea5-49d4-b0aa-ab0eb7d65fb9';
  $display->content['new-b22c11aa-0ea5-49d4-b0aa-ab0eb7d65fb9'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-b22c11aa-0ea5-49d4-b0aa-ab0eb7d65fb9';
  $pane = new stdClass();
  $pane->pid = 'new-736e11a0-311d-4e0d-8cf5-af3f10fdced8';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '736e11a0-311d-4e0d-8cf5-af3f10fdced8';
  $display->content['new-736e11a0-311d-4e0d-8cf5-af3f10fdced8'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-736e11a0-311d-4e0d-8cf5-af3f10fdced8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-60b401ff-3d6b-4770-b294-3f78951fcf97';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_2__panel_context_99af5d8d-2e4c-40ac-a3cf-9cef1dc016d8';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Articles by Year',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles',
    'panels_breadcrumbs_paths' => 'articles',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-74ce7b5d-4efe-4ede-abaa-e5ea42d6b406';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '74ce7b5d-4efe-4ede-abaa-e5ea42d6b406';
  $display->content['new-74ce7b5d-4efe-4ede-abaa-e5ea42d6b406'] = $pane;
  $display->panels['content'][0] = 'new-74ce7b5d-4efe-4ede-abaa-e5ea42d6b406';
  $pane = new stdClass();
  $pane->pid = 'new-f58122b9-2f6f-4c45-9a0b-2161e73eeefc';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'name' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Articles Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f58122b9-2f6f-4c45-9a0b-2161e73eeefc';
  $display->content['new-f58122b9-2f6f-4c45-9a0b-2161e73eeefc'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-f58122b9-2f6f-4c45-9a0b-2161e73eeefc';
  $pane = new stdClass();
  $pane->pid = 'new-1f9b0b55-df91-4fb9-bcd0-3b999a95e85e';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f9b0b55-df91-4fb9-bcd0-3b999a95e85e';
  $display->content['new-1f9b0b55-df91-4fb9-bcd0-3b999a95e85e'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-1f9b0b55-df91-4fb9-bcd0-3b999a95e85e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-74ce7b5d-4efe-4ede-abaa-e5ea42d6b406';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_wwm_2__panel_context_68ccb353-2d24-48c5-b2fb-531de2bfa8f5';
  $handler->task = 'page';
  $handler->subtask = 'articles_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Articles Test Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'articles',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'Articles';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2b23291a-a35f-4d69-b594-627b8f845115';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2b23291a-a35f-4d69-b594-627b8f845115';
  $display->content['new-2b23291a-a35f-4d69-b594-627b8f845115'] = $pane;
  $display->panels['content'][0] = 'new-2b23291a-a35f-4d69-b594-627b8f845115';
  $pane = new stdClass();
  $pane->pid = 'new-ca147eab-c649-4ab4-995c-c014319cfdaa';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '0',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Articles Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca147eab-c649-4ab4-995c-c014319cfdaa';
  $display->content['new-ca147eab-c649-4ab4-995c-c014319cfdaa'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-ca147eab-c649-4ab4-995c-c014319cfdaa';
  $pane = new stdClass();
  $pane->pid = 'new-a2a11503-d458-407a-ab46-458a995706dc';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a2a11503-d458-407a-ab46-458a995706dc';
  $display->content['new-a2a11503-d458-407a-ab46-458a995706dc'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-a2a11503-d458-407a-ab46-458a995706dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2b23291a-a35f-4d69-b594-627b8f845115';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles_wwm_2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_wwm_1';
  $page->task = 'page';
  $page->admin_title = 'News list';
  $page->admin_description = 'A list of all news items on the site.';
  $page->path = 'news/!year/!month/!day';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'day' => array(
      'id' => 3,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_1__panel_context_4f673da5-0ffa-44f3-9b10-db647fb27c81';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News by Day',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/*/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News
%year:html_safe
%month:html_safe',
    'panels_breadcrumbs_paths' => 'news
news/%year:html_safe
news/%year:html_safe/%month:html_safe',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Test Pane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-38f62835-a247-4368-9bba-372dffa93a5c';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '38f62835-a247-4368-9bba-372dffa93a5c';
  $display->content['new-38f62835-a247-4368-9bba-372dffa93a5c'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-38f62835-a247-4368-9bba-372dffa93a5c';
  $pane = new stdClass();
  $pane->pid = 'new-2d4d0591-f336-4a92-a7b1-8e3090453295';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2d4d0591-f336-4a92-a7b1-8e3090453295';
  $display->content['new-2d4d0591-f336-4a92-a7b1-8e3090453295'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-2d4d0591-f336-4a92-a7b1-8e3090453295';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_1__panel_context_89c27318-1177-44c5-8471-889929b0dbca';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'News by Month',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News
%year:html_safe',
    'panels_breadcrumbs_paths' => 'news
news/%year:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Test Pane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b';
  $display->content['new-e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b';
  $pane = new stdClass();
  $pane->pid = 'new-12e54bb0-2587-4312-aa7b-b3ce26245c7c';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '12e54bb0-2587-4312-aa7b-b3ce26245c7c';
  $display->content['new-12e54bb0-2587-4312-aa7b-b3ce26245c7c'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-12e54bb0-2587-4312-aa7b-b3ce26245c7c';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_1__panel_context_0b0de4cd-83b6-417f-ac1c-3c476dcda56c';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'News by Year',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News',
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Test Pane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-6087c6ac-87f7-48b0-b984-cc2b269b9bfb';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6087c6ac-87f7-48b0-b984-cc2b269b9bfb';
  $display->content['new-6087c6ac-87f7-48b0-b984-cc2b269b9bfb'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-6087c6ac-87f7-48b0-b984-cc2b269b9bfb';
  $pane = new stdClass();
  $pane->pid = 'new-c2f7b166-503d-4016-a7ff-dae22910e27e';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c2f7b166-503d-4016-a7ff-dae22910e27e';
  $display->content['new-c2f7b166-503d-4016-a7ff-dae22910e27e'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-c2f7b166-503d-4016-a7ff-dae22910e27e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_1__panel_context_ffbf02d1-73c6-499a-8d5c-b5e3ae8d8c2f';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'News Test Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-295dfa15-fb30-4855-8aea-7cc33da25c6a';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '0',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '295dfa15-fb30-4855-8aea-7cc33da25c6a';
  $display->content['new-295dfa15-fb30-4855-8aea-7cc33da25c6a'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-295dfa15-fb30-4855-8aea-7cc33da25c6a';
  $pane = new stdClass();
  $pane->pid = 'new-7c436fd6-e605-44ca-bea9-8a87e20e05c5';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7c436fd6-e605-44ca-bea9-8a87e20e05c5';
  $display->content['new-7c436fd6-e605-44ca-bea9-8a87e20e05c5'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-7c436fd6-e605-44ca-bea9-8a87e20e05c5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_wwm_1'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_wwm_2';
  $page->task = 'page';
  $page->admin_title = 'News list';
  $page->admin_description = 'A list of all news items on the site.';
  $page->path = 'news/!year/!month/!day';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'day' => array(
      'id' => 3,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_2__panel_context_af3a1b6c-00d7-417a-b848-17e9f7345233';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'News by Day',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/*/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News
%year:html_safe
%month:html_safe',
    'panels_breadcrumbs_paths' => 'news
news/%year:html_safe
news/%year:html_safe/%month:html_safe',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Test Pane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-38f62835-a247-4368-9bba-372dffa93a5c';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '38f62835-a247-4368-9bba-372dffa93a5c';
  $display->content['new-38f62835-a247-4368-9bba-372dffa93a5c'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-38f62835-a247-4368-9bba-372dffa93a5c';
  $pane = new stdClass();
  $pane->pid = 'new-2d4d0591-f336-4a92-a7b1-8e3090453295';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2d4d0591-f336-4a92-a7b1-8e3090453295';
  $display->content['new-2d4d0591-f336-4a92-a7b1-8e3090453295'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-2d4d0591-f336-4a92-a7b1-8e3090453295';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_2__panel_context_f8fa4702-a8e5-4c73-920b-cec1395ca18a';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'News by Month',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News
%year:html_safe',
    'panels_breadcrumbs_paths' => 'news
news/%year:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Test Pane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b';
  $display->content['new-e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-e2ba46c1-4fc4-43e9-8756-ef0ff8ca0f9b';
  $pane = new stdClass();
  $pane->pid = 'new-12e54bb0-2587-4312-aa7b-b3ce26245c7c';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '12e54bb0-2587-4312-aa7b-b3ce26245c7c';
  $display->content['new-12e54bb0-2587-4312-aa7b-b3ce26245c7c'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-12e54bb0-2587-4312-aa7b-b3ce26245c7c';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_2__panel_context_fd4ff2ce-e35a-45c1-8957-1585e7f11183';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'News by Year',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News',
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Test Pane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-6087c6ac-87f7-48b0-b984-cc2b269b9bfb';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6087c6ac-87f7-48b0-b984-cc2b269b9bfb';
  $display->content['new-6087c6ac-87f7-48b0-b984-cc2b269b9bfb'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-6087c6ac-87f7-48b0-b984-cc2b269b9bfb';
  $pane = new stdClass();
  $pane->pid = 'new-c2f7b166-503d-4016-a7ff-dae22910e27e';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c2f7b166-503d-4016-a7ff-dae22910e27e';
  $display->content['new-c2f7b166-503d-4016-a7ff-dae22910e27e'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-c2f7b166-503d-4016-a7ff-dae22910e27e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_wwm_2__panel_context_ebeccf16-4247-48a3-8f3d-4d9e60e8c37d';
  $handler->task = 'page';
  $handler->subtask = 'news_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'News Test Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'path' => 'news-test',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e40b83b-4fec-4478-885b-a71d1d53385b';
  $display->content['new-6e40b83b-4fec-4478-885b-a71d1d53385b'] = $pane;
  $display->panels['content'][0] = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $pane = new stdClass();
  $pane->pid = 'new-295dfa15-fb30-4855-8aea-7cc33da25c6a';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '0',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'News Archive',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '295dfa15-fb30-4855-8aea-7cc33da25c6a';
  $display->content['new-295dfa15-fb30-4855-8aea-7cc33da25c6a'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-295dfa15-fb30-4855-8aea-7cc33da25c6a';
  $pane = new stdClass();
  $pane->pid = 'new-7c436fd6-e605-44ca-bea9-8a87e20e05c5';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7c436fd6-e605-44ca-bea9-8a87e20e05c5';
  $display->content['new-7c436fd6-e605-44ca-bea9-8a87e20e05c5'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-7c436fd6-e605-44ca-bea9-8a87e20e05c5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6e40b83b-4fec-4478-885b-a71d1d53385b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_wwm_2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'press_releases_wwm_1';
  $page->task = 'page';
  $page->admin_title = 'Press Releases list';
  $page->admin_description = 'List of all Press Releases in the site.';
  $page->path = 'press-releases/!year/!month/!day';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Press Releases test',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'day' => array(
      'id' => 3,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_1__panel_context_91135870-630e-4a20-9b3d-1404a26d5eec';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Press Releases by Day',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases/*/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Press Releases
%year:html_safe
%month:html_safe',
    'panels_breadcrumbs_paths' => 'press-releases
press-releases/%year:html_safe
press-releases/%year:html_safe/%month:html_safe',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f749a493-5fcd-44a1-87ab-585844c48442';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f749a493-5fcd-44a1-87ab-585844c48442';
  $display->content['new-f749a493-5fcd-44a1-87ab-585844c48442'] = $pane;
  $display->panels['content'][0] = 'new-f749a493-5fcd-44a1-87ab-585844c48442';
  $pane = new stdClass();
  $pane->pid = 'new-46ae5494-007c-44cb-8b98-ddf64843d778';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46ae5494-007c-44cb-8b98-ddf64843d778';
  $display->content['new-46ae5494-007c-44cb-8b98-ddf64843d778'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-46ae5494-007c-44cb-8b98-ddf64843d778';
  $pane = new stdClass();
  $pane->pid = 'new-fa314943-08bd-4213-aa64-a13c3ad8537a';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fa314943-08bd-4213-aa64-a13c3ad8537a';
  $display->content['new-fa314943-08bd-4213-aa64-a13c3ad8537a'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-fa314943-08bd-4213-aa64-a13c3ad8537a';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f749a493-5fcd-44a1-87ab-585844c48442';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_1__panel_context_ded49fab-6eaf-4aeb-a3ef-5055912aa19b';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Press Releases by Month',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Press Releases
%year:html_safe',
    'panels_breadcrumbs_paths' => 'press-releases
press-releases/%year:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $display->content['new-b648ea77-fd5d-46b4-9245-54e625f1b29f'] = $pane;
  $display->panels['content'][0] = 'new-b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $pane = new stdClass();
  $pane->pid = 'new-110e6a57-f900-42c8-bbe3-601ee2662875';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '110e6a57-f900-42c8-bbe3-601ee2662875';
  $display->content['new-110e6a57-f900-42c8-bbe3-601ee2662875'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-110e6a57-f900-42c8-bbe3-601ee2662875';
  $pane = new stdClass();
  $pane->pid = 'new-e533b125-d325-40d8-9ee3-e1f91d132fc8';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e533b125-d325-40d8-9ee3-e1f91d132fc8';
  $display->content['new-e533b125-d325-40d8-9ee3-e1f91d132fc8'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-e533b125-d325-40d8-9ee3-e1f91d132fc8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_1__panel_context_c0e77e8e-ebaa-4298-9b18-b969bc6e1bab';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Press Releases by Year',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Press Releases',
    'panels_breadcrumbs_paths' => 'press-releases',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7c140952-c011-4245-b914-0d3da854952d';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c140952-c011-4245-b914-0d3da854952d';
  $display->content['new-7c140952-c011-4245-b914-0d3da854952d'] = $pane;
  $display->panels['content'][0] = 'new-7c140952-c011-4245-b914-0d3da854952d';
  $pane = new stdClass();
  $pane->pid = 'new-bd955518-a662-474d-be3d-ec172374268e';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bd955518-a662-474d-be3d-ec172374268e';
  $display->content['new-bd955518-a662-474d-be3d-ec172374268e'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-bd955518-a662-474d-be3d-ec172374268e';
  $pane = new stdClass();
  $pane->pid = 'new-05dc0b4d-2c57-4105-b7cf-71539d269531';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '05dc0b4d-2c57-4105-b7cf-71539d269531';
  $display->content['new-05dc0b4d-2c57-4105-b7cf-71539d269531'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-05dc0b4d-2c57-4105-b7cf-71539d269531';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-7c140952-c011-4245-b914-0d3da854952d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_1__panel_context_da780f83-5bd4-4f73-b899-9d34d0680b52';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_1';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Press Releases Test Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'Press  Releases';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $display->content['new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2'] = $pane;
  $display->panels['content'][0] = 'new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $pane = new stdClass();
  $pane->pid = 'new-9e9cf0a9-d619-4608-8ec8-6f76635df4f2';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '0',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9e9cf0a9-d619-4608-8ec8-6f76635df4f2';
  $display->content['new-9e9cf0a9-d619-4608-8ec8-6f76635df4f2'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-9e9cf0a9-d619-4608-8ec8-6f76635df4f2';
  $pane = new stdClass();
  $pane->pid = 'new-79811f26-8f9a-405d-9182-359e2ebba719';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '79811f26-8f9a-405d-9182-359e2ebba719';
  $display->content['new-79811f26-8f9a-405d-9182-359e2ebba719'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-79811f26-8f9a-405d-9182-359e2ebba719';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['press_releases_wwm_1'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'press_releases_wwm_2';
  $page->task = 'page';
  $page->admin_title = 'Press Releases list';
  $page->admin_description = 'List of all Press Releases in the site.';
  $page->path = 'press-releases/!year/!month/!day';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Press Releases test',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'day' => array(
      'id' => 3,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_2__panel_context_23a97729-ff2c-4c0d-87ab-c62e5938e6f6';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Press Releases by Day',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases/*/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Press Releases
%year:html_safe
%month:html_safe',
    'panels_breadcrumbs_paths' => 'press-releases
press-releases/%year:html_safe
press-releases/%year:html_safe/%month:html_safe',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f749a493-5fcd-44a1-87ab-585844c48442';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f749a493-5fcd-44a1-87ab-585844c48442';
  $display->content['new-f749a493-5fcd-44a1-87ab-585844c48442'] = $pane;
  $display->panels['content'][0] = 'new-f749a493-5fcd-44a1-87ab-585844c48442';
  $pane = new stdClass();
  $pane->pid = 'new-46ae5494-007c-44cb-8b98-ddf64843d778';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46ae5494-007c-44cb-8b98-ddf64843d778';
  $display->content['new-46ae5494-007c-44cb-8b98-ddf64843d778'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-46ae5494-007c-44cb-8b98-ddf64843d778';
  $pane = new stdClass();
  $pane->pid = 'new-fa314943-08bd-4213-aa64-a13c3ad8537a';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fa314943-08bd-4213-aa64-a13c3ad8537a';
  $display->content['new-fa314943-08bd-4213-aa64-a13c3ad8537a'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-fa314943-08bd-4213-aa64-a13c3ad8537a';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f749a493-5fcd-44a1-87ab-585844c48442';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_2__panel_context_ee08c932-eeab-464a-88a1-8267ac306fbf';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Press Releases by Month',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Press Releases
%year:html_safe',
    'panels_breadcrumbs_paths' => 'press-releases
press-releases/%year:raw',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $display->content['new-b648ea77-fd5d-46b4-9245-54e625f1b29f'] = $pane;
  $display->panels['content'][0] = 'new-b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $pane = new stdClass();
  $pane->pid = 'new-110e6a57-f900-42c8-bbe3-601ee2662875';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '110e6a57-f900-42c8-bbe3-601ee2662875';
  $display->content['new-110e6a57-f900-42c8-bbe3-601ee2662875'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-110e6a57-f900-42c8-bbe3-601ee2662875';
  $pane = new stdClass();
  $pane->pid = 'new-e533b125-d325-40d8-9ee3-e1f91d132fc8';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e533b125-d325-40d8-9ee3-e1f91d132fc8';
  $display->content['new-e533b125-d325-40d8-9ee3-e1f91d132fc8'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-e533b125-d325-40d8-9ee3-e1f91d132fc8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-b648ea77-fd5d-46b4-9245-54e625f1b29f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_2__panel_context_2193bba9-f789-4cd5-b603-23a4ab567b2e';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Press Releases by Year',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Press Releases',
    'panels_breadcrumbs_paths' => 'press-releases',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7c140952-c011-4245-b914-0d3da854952d';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c140952-c011-4245-b914-0d3da854952d';
  $display->content['new-7c140952-c011-4245-b914-0d3da854952d'] = $pane;
  $display->panels['content'][0] = 'new-7c140952-c011-4245-b914-0d3da854952d';
  $pane = new stdClass();
  $pane->pid = 'new-bd955518-a662-474d-be3d-ec172374268e';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'fields_override' => array(
      'title' => 1,
      'published_at' => 0,
      'field_featured_image' => 0,
      'body' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bd955518-a662-474d-be3d-ec172374268e';
  $display->content['new-bd955518-a662-474d-be3d-ec172374268e'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-bd955518-a662-474d-be3d-ec172374268e';
  $pane = new stdClass();
  $pane->pid = 'new-05dc0b4d-2c57-4105-b7cf-71539d269531';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '05dc0b4d-2c57-4105-b7cf-71539d269531';
  $display->content['new-05dc0b4d-2c57-4105-b7cf-71539d269531'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-05dc0b4d-2c57-4105-b7cf-71539d269531';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-7c140952-c011-4245-b914-0d3da854952d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_wwm_2__panel_context_ecddc83e-692e-44d5-abc7-e9cc63c57760';
  $handler->task = 'page';
  $handler->subtask = 'press_releases_wwm_2';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Press Releases Test Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'press-releases',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'wwm_stacked_and_packed_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'subheader_1_left' => NULL,
      'subheader_1_mid' => NULL,
      'subheader_1_right' => NULL,
      'subheader_2_left' => NULL,
      'subheader_2_mid' => NULL,
      'subheader_2_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'content_top' => NULL,
      'help' => NULL,
      'left_sidebar_top' => NULL,
      'left_sidebar_bottom' => NULL,
      'right_sidebar_top' => NULL,
      'right_sidebar_bottom' => NULL,
      'subfooter_1_left' => NULL,
      'subfooter_1_mid' => NULL,
      'subfooter_1_right' => NULL,
      'subfooter_2_left' => NULL,
      'subfooter_2_mid' => NULL,
      'subfooter_2_right' => NULL,
      'middle' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'middle' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = 'Press  Releases';
  $display->uuid = '0bc617af-cb78-462d-90b0-018f0d1299e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'clean_markup' => array(
        'pane_wrapper' => 'div',
        'additional_pane_classes' => 'panel-pane',
        'additional_pane_attributes' => '',
        'enable_inner_div' => 0,
        'title_wrapper' => 'h2',
        'title_hide' => 1,
        'content_wrapper' => 'none',
      ),
    ),
    'style' => 'clean_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $display->content['new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2'] = $pane;
  $display->panels['content'][0] = 'new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $pane = new stdClass();
  $pane->pid = 'new-9e9cf0a9-d619-4608-8ec8-6f76635df4f2';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '0',
    'fields_override' => array(
      'published_at_1' => 0,
      'published_at_2' => 0,
      'published_at' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Press Releases Archive',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9e9cf0a9-d619-4608-8ec8-6f76635df4f2';
  $display->content['new-9e9cf0a9-d619-4608-8ec8-6f76635df4f2'] = $pane;
  $display->panels['right_sidebar_top'][0] = 'new-9e9cf0a9-d619-4608-8ec8-6f76635df4f2';
  $pane = new stdClass();
  $pane->pid = 'new-79811f26-8f9a-405d-9182-359e2ebba719';
  $pane->panel = 'right_sidebar_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases_test-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '79811f26-8f9a-405d-9182-359e2ebba719';
  $display->content['new-79811f26-8f9a-405d-9182-359e2ebba719'] = $pane;
  $display->panels['right_sidebar_top'][1] = 'new-79811f26-8f9a-405d-9182-359e2ebba719';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-394a74f8-3cec-4c54-b46d-2aa3c067a0b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['press_releases_wwm_2'] = $page;

  return $pages;

}
