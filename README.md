# eddiso

An ISO19139 XML metaadata record harvester to work from instances of the Erddap (TM) scientific data server.

## Contents

- [Introduction](#introduction)
- [Compile](#compile)
- [Run](#run)
    - [Display Help](#display-help)
    - [List Erddap Servers](#list-erddap-servers)
    - [Harvest ISO19139 XML Files](#harvest-iso19139-xml-files)
    - [Main Function Return Codes](#main-function-return-codes)
    
## Introduction

## Compile

An example compilation command is shown below, using GCC:

```console
gcc -Iinclude eddiso.c src/man.c src/version.c -o eddiso
```

## Run

The following sections show the different options available in eddiso.

### Display Help

Print a help page to the screen:

```console
eddiso --help
```

### Get Version Information

Print the version of the `eddiso` installation to the screen.

```console
eddiso --version
```

### List Erddap Servers

Print a list of HTTP URLs of instances of the Erddap (TM) scientific data server software to the screen:

```console
eddiso --awesome {URL}
```

### Harvest ISO19139 XML Files

Retrieve ISO19139 XML datasets for all datasets on an instance of the Erddap (TM) scientific data server software to a specified loacation:

```console
eddiso --server {URL} {OUTDIR}
```

where URL is the web address of an instance of the Erddap (TM) scientific data server software. e.g.:

```console
eddiso --server https://erddap.marine.ie/erddap/
```

### Main Function Return Codes

The following return codes are used in the main function of `eddiso`.

| | |
|-|-|
|0|OK|
|-1|Invocation error: No mode flag supplied|
|-2|Invocation error: Multiple mode flags supplied|
|-3|Invocation error: Wrong number of input arguments supplied|