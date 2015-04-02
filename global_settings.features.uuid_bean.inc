<?php
/**
 * @file
 * global_settings.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function global_settings_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Footer Links',
    'description' => NULL,
    'title' => '',
    'type' => 'basic_wyswiyg_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'footer-links',
    'view_mode' => 'default',
    'created' => 1426274506,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '55647c76-cd44-464c-963f-4e2375ddf02f',
    'uuid' => '54c2cf8c-5d67-462b-b1af-ff811fad1e6f',
    'field_wysiwyg' => array(
      'und' => array(
        0 => array(
          'value' => '<ul>
<li><a href="#">Department of Music</a></li>
<li><a href="#">UNC Charlotte bands</a></li>
<li><a href="#">Charlotte 49ers Athletics</a></li>
<li><a href="#">Facebook</a></li>
<li><a href="#">Twitter</a></li>
<li><a href="#">Instagram</a></li>
</ul>',
          'format' => 'filtered_html',
          'safe_value' => '<ul><li><a href="#">Department of Music</a></li>
<li><a href="#">UNC Charlotte bands</a></li>
<li><a href="#">Charlotte 49ers Athletics</a></li>
<li><a href="#">Facebook</a></li>
<li><a href="#">Twitter</a></li>
<li><a href="#">Instagram</a></li>
</ul>',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Footer Address',
    'description' => NULL,
    'title' => '',
    'type' => 'basic_wyswiyg_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'footer-address',
    'view_mode' => 'default',
    'created' => 1425570371,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '23d5595d-2ab7-4e13-aebb-ddf40d14ed71',
    'uuid' => 'dee44298-30b7-46f1-9797-64d660d2e7ad',
    'field_wysiwyg' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="footer-university-info">
    <div id="university-name"><a href="http://www.uncc.edu">The University of North Carolina at Charlotte</a></div>
    <div id="university-address">9201 University City Blvd, Charlotte, NC 28223-0001 <strong>·</strong>704-687-8622</div>
    <div id="university-legal">©&nbsp;2015&nbsp;UNC&nbsp;Charlotte&nbsp;|&nbsp;All&nbsp;Rights&nbsp;Reserved&nbsp;|&nbsp;<a title="" href="http://legal.uncc.edu/termsofuse">Terms&nbsp;of&nbsp;Use</a>&nbsp;|&nbsp;<a title="" href="http://legal.uncc.edu/policies">University&nbsp;Policies</a>&nbsp;|&nbsp;<a title="Contact Us" href="/contact">Contact&nbsp;Us</a></div>       
  </div>',
          'format' => 'filtered_html',
          'safe_value' => '<p><a href="http://www.uncc.edu">The University of North Carolina at Charlotte</a><br />
    9201 University City Blvd, Charlotte, NC 28223-0001 <strong>·</strong>704-687-8622<br />
    © 2015 UNC Charlotte | All Rights Reserved | <a title="" href="http://legal.uncc.edu/termsofuse">Terms of Use</a> | <a title="" href="http://legal.uncc.edu/policies">University Policies</a> | <a title="Contact Us" href="/contact">Contact Us</a></p>
',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Footer Social',
    'description' => NULL,
    'title' => '',
    'type' => 'basic_wyswiyg_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'footer-social',
    'view_mode' => 'default',
    'created' => 1425570426,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '519f163a-b336-4682-a65c-9b1f3f34104c',
    'uuid' => 'fca23abc-69d2-4a25-a6ea-50b502e2c0d0',
    'field_wysiwyg' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="footer-university-social">
<div class="social-title">Follow UNC Charlotte</div>
<div class="footer-follow-icons">
<div class="facebook social-icons"><a title="Facebook" href="http://www.facebook.com/UNCCharlotte" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Facebook" width="20" height="20" /></a></div>
<div class="blog social-icons"><a title="Blogger" href="http://unccltnews.blogspot.com/" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Blogger" width="20" height="20" /></a></div>
<div class="twitter social-icons"><a title="Twitter" href="http://twitter.com/UNCCharlotte" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Twitter" width="20" height="20" /></a></div>
<div class="flickr social-icons"><a title="Flickr" href="http://www.flickr.com/photos/stakeyourclaim/sets/" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Flickr" width="20" height="20" /></a></div>
<div class="youtube social-icons"><a title="YouTube" href="http://www.youtube.com/unccharlottevideo" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="YouTube" width="20" height="20" /></a></div>
</div>
<!-- /#footer-follow-icons --></div>',
          'format' => 'full_html',
          'safe_value' => '<div id="footer-university-social">
<div class="social-title">Follow UNC Charlotte</div>
<div class="footer-follow-icons">
<div class="facebook social-icons"><a title="Facebook" href="http://www.facebook.com/UNCCharlotte" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Facebook" width="20" height="20" /></a></div>
<div class="blog social-icons"><a title="Blogger" href="http://unccltnews.blogspot.com/" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Blogger" width="20" height="20" /></a></div>
<div class="twitter social-icons"><a title="Twitter" href="http://twitter.com/UNCCharlotte" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Twitter" width="20" height="20" /></a></div>
<div class="flickr social-icons"><a title="Flickr" href="http://www.flickr.com/photos/stakeyourclaim/sets/" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="Flickr" width="20" height="20" /></a></div>
<div class="youtube social-icons"><a title="YouTube" href="http://www.youtube.com/unccharlottevideo" target="_blank"><img src="/sites/all/themes/unccedu/images/1x1.gif" alt="YouTube" width="20" height="20" /></a></div>
</div>
<!-- /#footer-follow-icons --></div>
',
        ),
      ),
    ),
  );
  return $beans;
}
