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

; (STUB) Panels and related modules.
;includes[panels] = "makefiles/panels.make"

; Search improvement modules.
includes[search] = "makefiles/search.make"

; SEO related modules.
includes[seo] = "makefiles/seo.make"

; UI/UX improvements (and Jquery).
includes[ui] = "makefiles/ui.make"

; Views and supporting modules.
includes[views] = "makefiles/views.make"

; (STUB) Editing workflow modules.
;includes[workflow] = "makefiles/workflow.make"

; (STUB) WYSIWYG modules.
;includes[wysiwyg] = "makefiles/wysiwyg.make"
