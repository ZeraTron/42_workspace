#!/bin/sh
find . -name "*.sh" -exec basename {} \; | sed 's/.\{3\}$//'
