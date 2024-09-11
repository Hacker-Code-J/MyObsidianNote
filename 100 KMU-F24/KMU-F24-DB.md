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
    position: 4
    isHidden: false
    sortIndex: -1
    width: 201
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
    position: 5
    isHidden: true
    sortIndex: -1
    width: 309
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
    position: 6
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 299
    options:
      - { label: "um-lecture", value: "um-lecture", color: "hsl(97, 95%, 90%)"}
      - { label: "host", value: "host", color: "hsl(118, 95%, 90%)"}
      - { label: "ISP", value: "ISP", color: "hsl(157, 95%, 90%)"}
      - { label: "protocol", value: "protocol", color: "hsl(52, 95%, 90%)"}
      - { label: "socket", value: "socket", color: "hsl(108, 95%, 90%)"}
      - { label: "secure-network", value: "secure-network", color: "hsl(239, 95%, 90%)"}
      - { label: "excalidraw", value: "excalidraw", color: "hsl(16, 95%, 90%)"}
      - { label: "ssw-practice", value: "ssw-practice", color: "hsl(345, 95%, 90%)"}
      - { label: "ssw-lecture", value: "ssw-lecture", color: "hsl(151, 95%, 90%)"}
      - { label: "sca-lecture", value: "sca-lecture", color: "hsl(3, 95%, 90%)"}
      - { label: "secure", value: "secure", color: "hsl(201, 95%, 90%)"}
      - { label: "C", value: "C", color: "hsl(273, 95%, 90%)"}
      - { label: "Lecture slides from TCP/IP Chapter 1", value: "Lecture slides from TCP/IP Chapter 1", color: "hsl(49, 95%, 90%)"}
      - { label: "sec", value: "sec", color: "hsl(308, 95%, 90%)"}
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
    sortIndex: 1
    isSorted: true
    isSortedDesc: false
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  title:
    input: text
    accessorKey: title
    key: title
    id: title
    label: title
    position: 3
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 407
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