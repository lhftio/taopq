local_repository(name = "pesto", path = "submodule/pesto")
load("@pesto//:rules.bzl", "submodule_init", "library_all")
submodule_init()
load("@submodule//:all.bzl", "submodule_all")
submodule_all()
library_all()