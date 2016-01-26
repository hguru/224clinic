<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
$gender = array('M' => 'Male', 'F' => 'Female');
$nw = entity_metadata_wrapper('node', $node);
$city = $nw->field_city->value();
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="meta submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
<div class="content clearfix"<?php print $content_attributes; ?>>
<fieldset class="group-profilefieldset field-group-fieldset form-wrapper"><legend><span class="fieldset-legend">PATIENT PROFILE</span></legend><div class="fieldset-wrapper">
<div class='main-left-2'>
<strong>Name: </strong><?php print $nw->field_last_name->value() . ', ' . $nw->field_first_name->value() . ' (' . (isset($gender[$nw->field_initial->value()]) ? $gender[$nw->field_initial->value()] : '') . ')';?><br>
<stront>HIN: </strong> <?php print $nw->field_ohip_->value(); ?><br>
<strong>Address: </strong> <?php print $nw->field_address->value(); ?>, <?php print ($city) ? $city->name : ''; ?><br>
<strong>Home Number: </strong> <?php print $nw->field_tel_home->value(); ?>   <strong>Mobile: </strong> <?php print $nw->field_cell->value(); ?><br>
<strong>Work: </strong> <?php print $nw->field_tel_work->value(); ?>
</div>
<div class='main-right-2'>
<strong>Account Number:  <?php print $node->nid; ?> </strong><br>
<strong>Date of birth: </strong> <?php print  date("Y-m-d", $nw->field_dob->value()); ?><br>
<Strong>Height: </strong> <?php print $nw->field_height->value();?><br>
<Strong>Weight: </strong> <?php print $nw->field_weight->value();?>
</div>
</div></fieldset>
<fieldset class="group-profilefieldset field-group-fieldset form-wrapper"><legend><span class="fieldset-legend">Physician</span></legend><div class="fieldset-wrapper">
<div class='main-left-2'>
<strong>Physician: </strong> <?php if (isset($nw->field_family_doctor->field_last_name)) : print 'Dr. ' . $nw->field_family_doctor->field_last_name->value() . ', ' . $nw->field_family_doctor->field_first_name->value(); else: print isset($nw->field_family_physician) ? $nw->field_family_physician->value() : ''; endif; ?>
</div>

<div class='main-right-2'>
<strong>Physician Number: </strong> <?php if (isset($nw->field_family_doctor->field_last_name)) : print $nw->field_family_doctor->field_physician_number->value(); endif; ?>
</div>
<strong>Medical History: </strong><?php print $nw->field_reason_for_referral->value();?><br>
<strong>Reason for Referral: </strong><br>
<?php if ($nw->field_chest_pain->value()) : print '<div class="symp">Chest Pain</div>'; endif; ?>
<?php if ($nw->field_heart_murmur->value()) : print '<div class="symp">Heart Murmur</div>'; endif; ?>
<?php if ($nw->field_coronary_artery_disease->value()) : print '<div class="symp">Coronary artery disease</div>'; endif; ?>
<?php if ($nw->field_difficulty_of_breathing->value()) : print '<div class="symp">Difficulty of breathing</div>'; endif; ?>
<?php if ($nw->field_hypertension->value()) : print '<div class="symp">Hypertension</div>'; endif; ?>
<?php if ($nw->field_diabetes->value()) : print '<div class="symp">Diabetes</div>'; endif; ?>
<?php if ($nw->field_palpitations->value()) : print '<div class="symp">Palpitations</div>'; endif; ?>
<?php if ($nw->field_angina->value()) : print '<div class="symp">Angina</div>'; endif; ?>
<?php if ($nw->field_congestive_hart_failure->value()) : print '<div class="symp">Congestive Heart Failure</div>'; endif; ?>
<?php if ($nw->field_pacemaker->value()) : print '<div class="symp">Pacemaker</div>'; endif; ?>
<?php if ($nw->field_rheumatic_heart_disease->value()) : print '<div class="symp">Rheumatic Heart Disease</div>'; endif; ?>
<?php if ($nw->field_congenital_heart_disease->value()) : print '<div class="symp">Congenital Heart Disease</div>'; endif; ?>
<?php if ($nw->field_edema_swelling_of_ankles->value()) : print '<div class="symp">Edema/Swelling of Ankles</div>'; endif; ?>
<?php if ($nw->field_stroke_or_previous_strokes->value()) : print '<div class="symp">Stroke or Previous Strokes</div>'; endif; ?>
<?php if ($nw->field_previous_bypass_surgery->value()) : print '<div class="symp">Previous bypass Surgery</div>'; endif; ?>
<?php if ($nw->field_epilepsy->value()) : print '<div class="symp">Epilepsy</div>'; endif; ?>
<?php if ($nw->field_syncope_loss_of_consciousn->value()) : print '<div class="symp">Syncope/Loss of consciousness</div>'; endif; ?>
<?php if ($nw->field_others_please_explain_->value()) : print '<div class="symp">Others Please Explain</div>'; endif; ?>
<strong>mergency Contact</strong><?php print $nw->field_emergency_contact->value(); ?> <strong>Relation:</strong><?php print $nw->field_emergency_contact_relation->value(); ?>
</div></fieldset>
<fieldset class="group-profilefieldset field-group-fieldset form-wrapper"><legend><span class="fieldset-legend">Contact</span></legend><div class="fieldset-wrapper">
<table>
<?php 
  foreach ($nw->field_patient_follow_up_for_reca as $key => $recall) {
    print '<tr><td>' . date("F j Y",  $recall->field_recall_date->value()) . '</td>';
    print '<td>' . $recall->field_recall_message->value() . '</td></tr>';

}
?>
</table>
</div></fieldset>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>
  </div>

  <?php
    // Remove the "Add new comment" link on the teaser page or if the comment
    // form is being displayed on the same page.
    if ($teaser || !empty($content['comments']['comment_form'])) {
      unset($content['links']['comment']['#links']['comment-add']);
    }
    // Only display the wrapper div if there are links.
    $links = render($content['links']);
    if ($links):
  ?>
    <div class="link-wrapper">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</div>
