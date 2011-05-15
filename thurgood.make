; This makefile is based on the work of Fuse Interactive.
; http://fuseinteractive.ca/blog/getting-started-drupal-install-profiles

api = 2
core = 6.x

; Modules that are only of use to the site administrator.
includes[admin] = "makefiles/admin.make"

; Basic modules used to build out the rest of the site,
; or serving as prerequisites for other modules.
includes[basic] = "makefiles/basic.make"

; Everything else is broken into sections.

; CCK and modules that create new types of CCK fields.
includes[cck] = "makefiles/cck.make"

; Geospatial modules.
includes[geo] = "makefiles/geo.make"

; User interactions: Messaging, Notifications, and Flag.
includes[interaction] = "makefiles/interaction.make"

; Panels and related modules.
includes[panels] = "makefiles/panels.make"

; Search improvement modules.
includes[search] = "makefiles/search.make"

; SEO related modules.
includes[seo] = "makefiles/seo.make"

; UI/UX improvements (and Jquery).
includes[ui] = "makefiles/ui.make"

; Views and supporting modules.
includes[views] = "makefiles/views.make"

; Editing workflow modules.
includes[workflow] = "makefiles/workflow.make"

; (STUB) WYSIWYG modules.
;includes[wysiwyg] = "makefiles/wysiwyg.make"

; Features modules:
includes[features] = "makefiles/features.make"

; Themes:
includes[themes] = "makefiles/themes.make"

; Contrib patches:
; My own patch for Flag Note to change some settings I dislike.
projects[flag_note][patch][] = "https://github.com/Eronarn/thurgood_misc/raw/master/flag_note.patch"
