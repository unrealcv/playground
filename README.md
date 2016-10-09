# unrealcv-playground

> **Interested in the update of unrealcv? please subscribe for update. (Only release update will be sent)**

This is a minimal project to show the usage of unrealcv.

It helps the development and debug of unrealcv.

UnrealCV playground is a minimal Unreal Engine (UE4) project to demonstrate how to use UnrealCV. It also helps the testing of UnrealCV.

This UE4 project is carefully modified from FirstPerson shooter template of UE4, all its digital contents belong to original authors. The modification left only the essential contents for demo purpose to keep this repo as small as possible. This is a screenshot of what this project looks like

This project is still under construction. Relevant tutorial and scripts will be added gradually.

This is a c++ project. UnrealCV is included as a submodule, so that it is easy to do development and debugging.

The submodule is currently from qiuwch/unrealcv. Need to switch it to unrealcv/unrealcv

## Installation

Get this project by `git clone git@github.com:qiuwch/unrealcv-playground.git --recursive`, include `--recursive` to also clone the [unrealcv plugin](http://github.com/unrealcv/unrealcv)

```bash
git clone git@github.com:qiuwch/unrealcv-playground.git --recursive`
```

If the project is already cloned without unrealcv plugin (the `plugins/unrealcv` is empty). Run `git submodule init` and `git submodule update` to get the plugin.

## How to use this project.

In windows, right click `playground.uproject` and generate a visual studio solution.

In Linux, generate `Makefile` by following the instruction [here](https://wiki.unrealengine.com/Building_On_Linux#Generating_project_files_for_your_project)

## How to create a binary.

## Feedback
Issue for this project can be reported to the issue tracker of either [unrealcv]() or [playground]().
