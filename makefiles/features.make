; Features modules.

api = 2
core = 6.x

projects[thurgood_feature][type] = "module"
projects[thurgood_feature][subdir] = "custom"
projects[thurgood_feature][download][type] = "git"
projects[thurgood_feature][download][url] = "git://github.com/Eronarn/thurgood_feature.git"

; Technically not a feature but putting it here anyways.
projects[thurgood_custom_module][type] = "module"
projects[thurgood_custom_module][subdir] = "custom"
projects[thurgood_custom_module][download][type] = "git"
projects[thurgood_custom_module][download][url] = "git://github.com/Eronarn/thurgood_custom_module.git"
