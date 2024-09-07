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
    width: 341
    position: 3
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
    position: 5
    isHidden: false
    sortIndex: -1
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  due_date:
    input: calendar_time
    accessorKey: due_date
    key: due_date
    id: due_date
    label: due_date
    position: 6
    skipPersist: false
    isHidden: false
    sortIndex: -1
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  status:
    input: select
    accessorKey: status
    key: status
    id: status
    label: status
    position: 2
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 108
    options:
      - { label: "In Progress", value: "In Progress", color: "hsl(89, 95%, 90%)"}
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
    width: 264
    options:
      - { label: "thesis,research", value: "thesis,research", color: "hsl(177, 95%, 90%)"}
      - { label: "thesis", value: "thesis", color: "hsl(98, 95%, 90%)"}
      - { label: "research", value: "research", color: "hsl(203, 95%, 90%)"}
      - { label: "comu", value: "comu", color: "hsl(272, 95%, 90%)"}
      - { label: "computer-", value: "computer-", color: "hsl(225, 95%, 90%)"}
      - { label: "computer-adied-cr", value: "computer-adied-cr", color: "hsl(261, 95%, 90%)"}
      - { label: "computer-adied-cryptography", value: "computer-adied-cryptography", color: "hsl(85, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  resources:
    input: text
    accessorKey: resources
    key: resources
    id: resources
    label: resources
    position: 8
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 210
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  year:
    input: number
    accessorKey: year
    key: year
    id: year
    label: year
    position: 1
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 37
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  authors:
    input: tags
    accessorKey: authors
    key: authors
    id: authors
    label: authors
    position: 4
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 494
    options:
      - { label: "Manuel Barbosa,Gilles Barthe,Karthik Bhargavan,Bruno Blanchet,Cas Cremers,Kevin Liao,and Bryan Parno", value: "Manuel Barbosa,Gilles Barthe,Karthik Bhargavan,Bruno Blanchet,Cas Cremers,Kevin Liao,and Bryan Parno", color: "hsl(113, 95%, 90%)"}
      - { label: "Manuel Barbosa", value: "Manuel Barbosa", color: "hsl(17, 95%, 90%)"}
      - { label: "Gilles Barthe", value: "Gilles Barthe", color: "hsl(9, 95%, 90%)"}
      - { label: "Karthik Bhargavan", value: "Karthik Bhargavan", color: "hsl(202, 95%, 90%)"}
      - { label: "Bruno Blanchet", value: "Bruno Blanchet", color: "hsl(286, 95%, 90%)"}
      - { label: "Cas Cremers", value: "Cas Cremers", color: "hsl(162, 95%, 90%)"}
      - { label: "Kevin Liao", value: "Kevin Liao", color: "hsl(215, 95%, 90%)"}
      - { label: "and Bryan Parno", value: "and Bryan Parno", color: "hsl(23, 95%, 90%)"}
      - { label: "Bryan Parno", value: "Bryan Parno", color: "hsl(241, 95%, 90%)"}
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
  show_metadata_tags: false
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