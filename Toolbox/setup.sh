#!/bin/sh
if grep -q  'export PATH=$PATH":$HOME/Desktop/42_workspace/Toolbox"' ~/.zshrc; then
	  echo 'Toolbox installed !'
	  exit
  fi
echo 'export PATH=$PATH":$HOME/Desktop/42_workspace/Toolbox"' >> ~/.zshrc

