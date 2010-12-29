; This makefile is based on the work of Fuse Interactive.
; http://fuseinteractive.ca/blog/getting-started-drupal-install-profiles

api = 2
core = 6.x

projects[drupal][type] = "core"
projects[thurgood][type] = "profile"
projects[thurgood][download][type] = "git"
projects[thurgood][download][url] = "git://github.com/Eronarn/Thurgood.git"
