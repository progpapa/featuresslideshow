core = 7.x
api = 2

; Modules
projects[ctools][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[filefield_paths][subdir] = "contrib"
projects[image][subdir] = "contrib"
projects[nodequeue][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"


; Patches
projects[nodequeue][patch][] = "https://drupal.org/files/nodequeue-rules_integration_for_smartqueues-1125922-33.patch"
