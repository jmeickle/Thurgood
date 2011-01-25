; This makefile is based on the work of Fuse Interactive.
; http://fuseinteractive.ca/blog/getting-started-drupal-install-profiles

api = 2
core = 6.x

; Core:
projects[drupal][type] = "core"

; Core patches:

; hierarchy field in vocabulary table resets to 0 when editing vocabulary
; http://drupal.org/node/580040
projects[drupal][patch][] = "http://drupal.org/files/issues/taxonomy-hierarchy-580040_0.patch"

; search_query_insert breaks down when the value of key is 0
; http://drupal.org/node/419388
projects[drupal][patch][] = "http://drupal.org/files/issues/search-query-insert-zero-value-419388.patch"

; Everything else goes in the profile's makefile.
projects[thurgood][type] = "profile"
projects[thurgood][download][type] = "git"
projects[thurgood][download][url] = "git://github.com/Eronarn/Thurgood.git"

; Another makefile could follow this one, if I had a variant on Thurgood.
