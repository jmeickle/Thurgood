#!/bin/sh
# Script is based on:
# http://davidherron.com/content/using-drush-make-maintain-source-tree-drupal-site-and-avoid-killing-kittens
DIR=thurgood-$(date +%Y%m%d)
drush make bootstrap.make DIR --prepare-install

#For when we start doing imports:
#(cd DIR/sites/default; tar cf - files) | (cd DIR/sites/default; tar xf -)
#cp domain.com/sites/default/settings.php new.domain.com/sites/default
done
