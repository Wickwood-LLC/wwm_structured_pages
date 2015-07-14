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
  $page->name = 'article_posts';
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
  $handler->name = 'page_article_posts__panel_context_f500cf5b-4a88-43ee-b0d4-3c48231a1e3b';
  $handler->task = 'page';
  $handler->subtask = 'article_posts';
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
  $handler->name = 'page_article_posts__panel_context_ff97ed2e-c3ee-4535-badc-5de74d367116';
  $handler->task = 'page';
  $handler->subtask = 'article_posts';
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
  $handler->name = 'page_article_posts__panel_context_f2b07472-ed6d-4476-8b68-34df128e9008';
  $handler->task = 'page';
  $handler->subtask = 'article_posts';
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
  $handler->name = 'page_article_posts__panel_context_dc26bc7f-8e63-4c80-91eb-148f52d8b2ca';
  $handler->task = 'page';
  $handler->subtask = 'article_posts';
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
  $pages['article_posts'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_posts';
  $page->task = 'page';
  $page->admin_title = 'News Posts';
  $page->admin_description = 'The primary disambiguation page for all things news-related. Think of as the primary page of a blog or news section of your site.';
  $page->path = 'news/!year/!month/!day';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '1',
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
  $handler->name = 'page_news_posts__panel_context_d5bb8d00-94a2-4c54-aa6b-58a68aaafc29';
  $handler->task = 'page';
  $handler->subtask = 'news_posts';
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
%month:uppercase_words_html_safe
%day:html_safe',
    'panels_breadcrumbs_paths' => 'news
news/%year:raw
news/%year:raw/%month:raw
news/%year:raw/%month:raw/%day:raw',
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
  $pane->pid = 'new-1747aaaa-0db3-4eb9-a5a6-fd06829ece3a';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-featured_news_posts_day';
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
  $pane->uuid = '1747aaaa-0db3-4eb9-a5a6-fd06829ece3a';
  $display->content['new-1747aaaa-0db3-4eb9-a5a6-fd06829ece3a'] = $pane;
  $display->panels['contentfooter'][0] = 'new-1747aaaa-0db3-4eb9-a5a6-fd06829ece3a';
  $pane = new stdClass();
  $pane->pid = 'new-17c25ac7-9467-4eb0-ae2b-f5f19a73c89d';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-list_news_from_day';
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
  $pane->uuid = '17c25ac7-9467-4eb0-ae2b-f5f19a73c89d';
  $display->content['new-17c25ac7-9467-4eb0-ae2b-f5f19a73c89d'] = $pane;
  $display->panels['contentfooter'][1] = 'new-17c25ac7-9467-4eb0-ae2b-f5f19a73c89d';
  $pane = new stdClass();
  $pane->pid = 'new-bd3d3484-b098-409f-aab4-5d391ec54ddd';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-article_archive';
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
  $pane->uuid = 'bd3d3484-b098-409f-aab4-5d391ec54ddd';
  $display->content['new-bd3d3484-b098-409f-aab4-5d391ec54ddd'] = $pane;
  $display->panels['sidebar'][0] = 'new-bd3d3484-b098-409f-aab4-5d391ec54ddd';
  $pane = new stdClass();
  $pane->pid = 'new-e4e05bb8-fc63-4a8a-96c1-cdcfc085f2fc';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-popular_news_topics';
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
  $pane->uuid = 'e4e05bb8-fc63-4a8a-96c1-cdcfc085f2fc';
  $display->content['new-e4e05bb8-fc63-4a8a-96c1-cdcfc085f2fc'] = $pane;
  $display->panels['sidebar'][1] = 'new-e4e05bb8-fc63-4a8a-96c1-cdcfc085f2fc';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-17c25ac7-9467-4eb0-ae2b-f5f19a73c89d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_posts__panel_context_d64295d5-c16a-4c28-a70a-e9c3e0a8adeb';
  $handler->task = 'page';
  $handler->subtask = 'news_posts';
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
%year:html_safe
%month:uppercase_words_html_safe',
    'panels_breadcrumbs_paths' => 'news
news/%year:raw
news/%year:raw/%month:raw',
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
  $pane->pid = 'new-26fb44b8-5047-4cb1-90c1-cff794544ae1';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-featured_news_posts_month';
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
  $pane->uuid = '26fb44b8-5047-4cb1-90c1-cff794544ae1';
  $display->content['new-26fb44b8-5047-4cb1-90c1-cff794544ae1'] = $pane;
  $display->panels['contentfooter'][0] = 'new-26fb44b8-5047-4cb1-90c1-cff794544ae1';
  $pane = new stdClass();
  $pane->pid = 'new-fd62eb7a-9e41-4b35-ada1-4028a5c97faf';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-list_news_from_month';
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
  $pane->uuid = 'fd62eb7a-9e41-4b35-ada1-4028a5c97faf';
  $display->content['new-fd62eb7a-9e41-4b35-ada1-4028a5c97faf'] = $pane;
  $display->panels['contentfooter'][1] = 'new-fd62eb7a-9e41-4b35-ada1-4028a5c97faf';
  $pane = new stdClass();
  $pane->pid = 'new-508ae96f-dd74-47de-8848-fdd8f435cbb4';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-article_archive';
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
  $pane->uuid = '508ae96f-dd74-47de-8848-fdd8f435cbb4';
  $display->content['new-508ae96f-dd74-47de-8848-fdd8f435cbb4'] = $pane;
  $display->panels['sidebar'][0] = 'new-508ae96f-dd74-47de-8848-fdd8f435cbb4';
  $pane = new stdClass();
  $pane->pid = 'new-37e6ebb1-deb6-4478-8fdb-9bd11cd57192';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-popular_news_topics';
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
  $pane->uuid = '37e6ebb1-deb6-4478-8fdb-9bd11cd57192';
  $display->content['new-37e6ebb1-deb6-4478-8fdb-9bd11cd57192'] = $pane;
  $display->panels['sidebar'][1] = 'new-37e6ebb1-deb6-4478-8fdb-9bd11cd57192';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-fd62eb7a-9e41-4b35-ada1-4028a5c97faf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_posts__panel_context_91e8459f-bd82-4e8c-b8e6-7b0b13dd8ab0';
  $handler->task = 'page';
  $handler->subtask = 'news_posts';
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
            'paths' => 'news/*',
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
  $pane->pid = 'new-229529c2-56a8-4d76-bac4-43ee6c55e666';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-featured_news_posts_year';
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
  $pane->uuid = '229529c2-56a8-4d76-bac4-43ee6c55e666';
  $display->content['new-229529c2-56a8-4d76-bac4-43ee6c55e666'] = $pane;
  $display->panels['contentfooter'][0] = 'new-229529c2-56a8-4d76-bac4-43ee6c55e666';
  $pane = new stdClass();
  $pane->pid = 'new-8044f571-da0f-4c74-b570-d3de32d83afc';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-list_news_from_year';
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
  $pane->uuid = '8044f571-da0f-4c74-b570-d3de32d83afc';
  $display->content['new-8044f571-da0f-4c74-b570-d3de32d83afc'] = $pane;
  $display->panels['contentfooter'][1] = 'new-8044f571-da0f-4c74-b570-d3de32d83afc';
  $pane = new stdClass();
  $pane->pid = 'new-4a33ceed-0b51-4e20-bca2-97e90e8a18b3';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-article_archive';
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
  $pane->uuid = '4a33ceed-0b51-4e20-bca2-97e90e8a18b3';
  $display->content['new-4a33ceed-0b51-4e20-bca2-97e90e8a18b3'] = $pane;
  $display->panels['sidebar'][0] = 'new-4a33ceed-0b51-4e20-bca2-97e90e8a18b3';
  $pane = new stdClass();
  $pane->pid = 'new-a88c2a67-e19a-4b3d-9965-bc21ee7dbb9b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-popular_news_topics';
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
  $pane->uuid = 'a88c2a67-e19a-4b3d-9965-bc21ee7dbb9b';
  $display->content['new-a88c2a67-e19a-4b3d-9965-bc21ee7dbb9b'] = $pane;
  $display->panels['sidebar'][1] = 'new-a88c2a67-e19a-4b3d-9965-bc21ee7dbb9b';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-8044f571-da0f-4c74-b570-d3de32d83afc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_posts__panel_context_59bf41d0-f06d-49d4-8e57-c3704586c5e5';
  $handler->task = 'page';
  $handler->subtask = 'news_posts';
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
  $display->title = '';
  $display->uuid = 'ba534b21-e0a7-4b60-af8c-c4fad3f110f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-57c65fce-7a28-4ba0-8f9b-e6b117f1feca';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-featured_news_posts';
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
  $pane->uuid = '57c65fce-7a28-4ba0-8f9b-e6b117f1feca';
  $display->content['new-57c65fce-7a28-4ba0-8f9b-e6b117f1feca'] = $pane;
  $display->panels['contentfooter'][0] = 'new-57c65fce-7a28-4ba0-8f9b-e6b117f1feca';
  $pane = new stdClass();
  $pane->pid = 'new-eeceed7a-5392-422e-9e9d-13dd9569c430';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-list_news_articles';
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
  $pane->uuid = 'eeceed7a-5392-422e-9e9d-13dd9569c430';
  $display->content['new-eeceed7a-5392-422e-9e9d-13dd9569c430'] = $pane;
  $display->panels['contentfooter'][1] = 'new-eeceed7a-5392-422e-9e9d-13dd9569c430';
  $pane = new stdClass();
  $pane->pid = 'new-f2d41b0a-ced0-40a2-8691-c0d1f49d2c2b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-article_archive';
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
  $pane->uuid = 'f2d41b0a-ced0-40a2-8691-c0d1f49d2c2b';
  $display->content['new-f2d41b0a-ced0-40a2-8691-c0d1f49d2c2b'] = $pane;
  $display->panels['sidebar'][0] = 'new-f2d41b0a-ced0-40a2-8691-c0d1f49d2c2b';
  $pane = new stdClass();
  $pane->pid = 'new-21248f18-18d9-40de-a855-41f9157a68cf';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_posts-popular_news_topics';
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
  $pane->uuid = '21248f18-18d9-40de-a855-41f9157a68cf';
  $display->content['new-21248f18-18d9-40de-a855-41f9157a68cf'] = $pane;
  $display->panels['sidebar'][1] = 'new-21248f18-18d9-40de-a855-41f9157a68cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_posts'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'press_releases';
  $page->task = 'page';
  $page->admin_title = 'Press Releases';
  $page->admin_description = 'The primary disambiguation page for all things articles-related. Think of as the primary page of a blog or news section of your site.';
  $page->path = 'press-releases/!year/!month/!day';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Press Releases',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_press_releases__panel_context_5097b041-6e38-41ab-966f-784aac751015';
  $handler->task = 'page';
  $handler->subtask = 'press_releases';
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
%month:uppercase_words_html_safe
%day:html_safe',
    'panels_breadcrumbs_paths' => 'press-releases
press-releases/%year:raw
press-releases/%year:raw/%month:raw
press-releases/%year:raw/%month:raw/%day:raw',
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
  $pane->pid = 'new-eb32a145-0724-4d4a-90e0-988e8994a7f6';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-featured_press_releases_day';
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
  $pane->uuid = 'eb32a145-0724-4d4a-90e0-988e8994a7f6';
  $display->content['new-eb32a145-0724-4d4a-90e0-988e8994a7f6'] = $pane;
  $display->panels['contentfooter'][0] = 'new-eb32a145-0724-4d4a-90e0-988e8994a7f6';
  $pane = new stdClass();
  $pane->pid = 'new-da051b49-5417-4a22-b408-c1616a3a120a';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-list_press_releases_from_day';
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
  $pane->uuid = 'da051b49-5417-4a22-b408-c1616a3a120a';
  $display->content['new-da051b49-5417-4a22-b408-c1616a3a120a'] = $pane;
  $display->panels['contentfooter'][1] = 'new-da051b49-5417-4a22-b408-c1616a3a120a';
  $pane = new stdClass();
  $pane->pid = 'new-2b07d0ae-0f84-4049-a046-e5e14f38b6c4';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-press_release_archive';
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
  $pane->uuid = '2b07d0ae-0f84-4049-a046-e5e14f38b6c4';
  $display->content['new-2b07d0ae-0f84-4049-a046-e5e14f38b6c4'] = $pane;
  $display->panels['sidebar'][0] = 'new-2b07d0ae-0f84-4049-a046-e5e14f38b6c4';
  $pane = new stdClass();
  $pane->pid = 'new-39bb1bb5-76ed-4be8-88a4-6d87bdf8422e';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-popular_press_releases_topics';
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
  $pane->uuid = '39bb1bb5-76ed-4be8-88a4-6d87bdf8422e';
  $display->content['new-39bb1bb5-76ed-4be8-88a4-6d87bdf8422e'] = $pane;
  $display->panels['sidebar'][1] = 'new-39bb1bb5-76ed-4be8-88a4-6d87bdf8422e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-da051b49-5417-4a22-b408-c1616a3a120a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases__panel_context_67eabbca-b98c-4a66-ac1c-fbf5688f6dc4';
  $handler->task = 'page';
  $handler->subtask = 'press_releases';
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
%year:html_safe
%month:uppercase_words_html_safe',
    'panels_breadcrumbs_paths' => 'press-releases
press-releases/%year:raw
press-releases/%year:raw/%month:raw',
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
  $pane->pid = 'new-827183e1-326c-4e15-9fc4-f0ac5324f881';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-featured_press_releases_month';
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
  $pane->uuid = '827183e1-326c-4e15-9fc4-f0ac5324f881';
  $display->content['new-827183e1-326c-4e15-9fc4-f0ac5324f881'] = $pane;
  $display->panels['contentfooter'][0] = 'new-827183e1-326c-4e15-9fc4-f0ac5324f881';
  $pane = new stdClass();
  $pane->pid = 'new-8b89b1c3-ddf2-4d28-8f07-63ded724bbd3';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-list_press_releases_from_month';
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
  $pane->uuid = '8b89b1c3-ddf2-4d28-8f07-63ded724bbd3';
  $display->content['new-8b89b1c3-ddf2-4d28-8f07-63ded724bbd3'] = $pane;
  $display->panels['contentfooter'][1] = 'new-8b89b1c3-ddf2-4d28-8f07-63ded724bbd3';
  $pane = new stdClass();
  $pane->pid = 'new-bde6fbb2-2311-4ac8-b9eb-faf1c3d6e91e';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-press_release_archive';
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
  $pane->uuid = 'bde6fbb2-2311-4ac8-b9eb-faf1c3d6e91e';
  $display->content['new-bde6fbb2-2311-4ac8-b9eb-faf1c3d6e91e'] = $pane;
  $display->panels['sidebar'][0] = 'new-bde6fbb2-2311-4ac8-b9eb-faf1c3d6e91e';
  $pane = new stdClass();
  $pane->pid = 'new-da4b62e7-3741-45ba-b6bf-1db4f21f6174';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-popular_press_releases_topics';
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
  $pane->uuid = 'da4b62e7-3741-45ba-b6bf-1db4f21f6174';
  $display->content['new-da4b62e7-3741-45ba-b6bf-1db4f21f6174'] = $pane;
  $display->panels['sidebar'][1] = 'new-da4b62e7-3741-45ba-b6bf-1db4f21f6174';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-8b89b1c3-ddf2-4d28-8f07-63ded724bbd3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases__panel_context_b1c74206-5bab-4acd-b0e7-f06608b6d08c';
  $handler->task = 'page';
  $handler->subtask = 'press_releases';
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
            'paths' => 'press-releases/*',
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
  $pane->pid = 'new-201d496b-69ba-44ef-8048-3979e61c2e70';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-featured_press_releases_year';
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
  $pane->uuid = '201d496b-69ba-44ef-8048-3979e61c2e70';
  $display->content['new-201d496b-69ba-44ef-8048-3979e61c2e70'] = $pane;
  $display->panels['contentfooter'][0] = 'new-201d496b-69ba-44ef-8048-3979e61c2e70';
  $pane = new stdClass();
  $pane->pid = 'new-22a6108e-1bfd-4ea6-a48d-7923142289e0';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-list_press_releases_from_year';
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
  $pane->uuid = '22a6108e-1bfd-4ea6-a48d-7923142289e0';
  $display->content['new-22a6108e-1bfd-4ea6-a48d-7923142289e0'] = $pane;
  $display->panels['contentfooter'][1] = 'new-22a6108e-1bfd-4ea6-a48d-7923142289e0';
  $pane = new stdClass();
  $pane->pid = 'new-8908a216-4ef9-4abc-80eb-e912858900e4';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-press_release_archive';
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
  $pane->uuid = '8908a216-4ef9-4abc-80eb-e912858900e4';
  $display->content['new-8908a216-4ef9-4abc-80eb-e912858900e4'] = $pane;
  $display->panels['sidebar'][0] = 'new-8908a216-4ef9-4abc-80eb-e912858900e4';
  $pane = new stdClass();
  $pane->pid = 'new-0a34115f-d26d-4a95-9531-38f405cfec18';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-popular_press_releases_topics';
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
  $pane->uuid = '0a34115f-d26d-4a95-9531-38f405cfec18';
  $display->content['new-0a34115f-d26d-4a95-9531-38f405cfec18'] = $pane;
  $display->panels['sidebar'][1] = 'new-0a34115f-d26d-4a95-9531-38f405cfec18';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-22a6108e-1bfd-4ea6-a48d-7923142289e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases__panel_context_e69f9314-8ed0-4f3e-b41e-84994722a524';
  $handler->task = 'page';
  $handler->subtask = 'press_releases';
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
  $display->title = 'Press Releases';
  $display->uuid = 'ba534b21-e0a7-4b60-af8c-c4fad3f110f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-01a5382f-31e3-4d38-9ada-2ddfa5aba176';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-featured_press_releases';
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
  $pane->uuid = '01a5382f-31e3-4d38-9ada-2ddfa5aba176';
  $display->content['new-01a5382f-31e3-4d38-9ada-2ddfa5aba176'] = $pane;
  $display->panels['contentfooter'][0] = 'new-01a5382f-31e3-4d38-9ada-2ddfa5aba176';
  $pane = new stdClass();
  $pane->pid = 'new-09cf20de-246f-448e-8ce5-a94622d3f98a';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-list_press_releases';
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
  $pane->uuid = '09cf20de-246f-448e-8ce5-a94622d3f98a';
  $display->content['new-09cf20de-246f-448e-8ce5-a94622d3f98a'] = $pane;
  $display->panels['contentfooter'][1] = 'new-09cf20de-246f-448e-8ce5-a94622d3f98a';
  $pane = new stdClass();
  $pane->pid = 'new-decf4aac-91ba-45c9-a077-8b3795a4b264';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-press_release_archive';
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
  $pane->uuid = 'decf4aac-91ba-45c9-a077-8b3795a4b264';
  $display->content['new-decf4aac-91ba-45c9-a077-8b3795a4b264'] = $pane;
  $display->panels['sidebar'][0] = 'new-decf4aac-91ba-45c9-a077-8b3795a4b264';
  $pane = new stdClass();
  $pane->pid = 'new-e58db7ff-eb7a-472d-a4d3-cfaff296bef7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'press_releases-popular_press_releases_topics';
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
  $pane->uuid = 'e58db7ff-eb7a-472d-a4d3-cfaff296bef7';
  $display->content['new-e58db7ff-eb7a-472d-a4d3-cfaff296bef7'] = $pane;
  $display->panels['sidebar'][1] = 'new-e58db7ff-eb7a-472d-a4d3-cfaff296bef7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['press_releases'] = $page;

  return $pages;

}
