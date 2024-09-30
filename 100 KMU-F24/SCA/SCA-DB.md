---

database-plugin: basic

---

```yaml:dbfolder
name: new database
description: new description
columns:
  __file__:
    key: __file__
    id: __file__
    input: markdown
    label: File
    accessorKey: __file__
    isMetadata: true
    skipPersist: false
    isDragDisabled: false
    csvCandidate: true
    position: 2
    isHidden: false
    sortIndex: -1
    width: 301
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: true
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  __modified__:
    key: __modified__
    id: __modified__
    input: metadata_time
    label: Modified
    accessorKey: __modified__
    isMetadata: true
    isDragDisabled: false
    skipPersist: false
    csvCandidate: true
    position: 3
    isHidden: false
    sortIndex: -1
    width: 199
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  __tags__:
    key: __tags__
    id: __tags__
    input: metadata_tags
    label: File Tags
    accessorKey: __tags__
    isMetadata: true
    isDragDisabled: false
    skipPersist: false
    csvCandidate: false
    position: 4
    isHidden: false
    sortIndex: -1
    width: 183
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  date:
    input: calendar
    accessorKey: date
    key: date
    id: date
    label: date
    position: 5
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 109
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  key_concepts:
    input: tags
    accessorKey: key_concepts
    key: key_concepts
    id: key_concepts
    label: key_concepts
    position: 6
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 190
    options:
      - { label: "Side-Channel-Attack", value: "Side-Channel-Attack", color: "hsl(66, 95%, 90%)"}
      - { label: "Power Model", value: "Power Model", color: "hsl(154, 95%, 90%)"}
      - { label: "Power-Analysis", value: "Power-Analysis", color: "hsl(45, 95%, 90%)"}
      - { label: "Po", value: "Po", color: "hsl(309, 95%, 90%)"}
      - { label: "Power", value: "Power", color: "hsl(145, 95%, 90%)"}
      - { label: "-", value: "-", color: "hsl(162, 95%, 90%)"}
      - { label: "Power Analaysis", value: "Power Analaysis", color: "hsl(250, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  tags:
    input: tags
    accessorKey: tags
    key: tags
    id: tags
    label: tags
    position: 7
    skipPersist: false
    isHidden: false
    sortIndex: -1
    options:
      - { label: "sca-lecture", value: "sca-lecture", color: "hsl(115, 95%, 90%)"}
      - { label: "side-channel", value: "side-channel", color: "hsl(172, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  week:
    input: number
    accessorKey: week
    key: week
    id: week
    label: week
    position: 1
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 55
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
config:
  remove_field_when_delete_column: false
  cell_size: normal
  sticky_first_column: true
  group_folder_column: 
  remove_empty_folders: false
  automatically_group_files: false
  hoist_files_with_empty_attributes: true
  show_metadata_created: false
  show_metadata_modified: true
  show_metadata_tasks: false
  show_metadata_inlinks: false
  show_metadata_outlinks: false
  show_metadata_tags: true
  source_data: current_folder
  source_form_result: 
  source_destination_path: /
  row_templates_folder: 00 Templates
  current_row_template: 
  pagination_size: 200
  font_size: 16
  enable_js_formulas: false
  formula_folder_path: /
  inline_default: false
  inline_new_position: last_field
  date_format: yyyy-MM-dd
  datetime_format: "yyyy-MM-dd HH:mm:ss"
  metadata_date_format: "yyyy-MM-dd HH:mm:ss"
  enable_footer: false
  implementation: default
filters:
  enabled: false
  conditions:
```