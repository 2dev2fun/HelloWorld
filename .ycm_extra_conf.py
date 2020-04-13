import os
import ycm_core
import pathlib

# includeDir = "-isystem" + pathlib.Path().absolute() + "/source"
# includeDir = "C:/Users/Maxim/temp/hello_world/source"
includeDir = "source"

def Settings(**kwargs):
    return { 'flags': ['-x', 'c++', '-Wall', '-Wextra', '-Werror', '-isystem', includeDir] }

SOURCE_EXTENSIONS = ['.cpp']
