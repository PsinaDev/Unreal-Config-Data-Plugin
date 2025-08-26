# DataConfigSystem

**DataConfigSystem** is a global configuration system for Unreal Engine 5. It is lightweight and does not depend on specific asset types. The system provides an easy way to store and asynchronously load configuration data (such as DataTables, Data Assets, or Blueprint classes) identified by `GameplayTag`.

---

## Features

* Global access to configuration assets through a subsystem
* Asynchronous loading of data by `GameplayTag`
* Custom Blueprint node `Async Load Data` with automatic type casting
* `DeveloperSettings` integration for easy setup in Project Settings
* Supports any asset type: `DataTable`, `PrimaryDataAsset`, `Blueprint Class`, and more

---

## Installation

1. Clone the repository into your project's `Plugins` folder:

```bash
cd YourUnrealProject/Plugins
git clone https://github.com/PsinaDev/Unreal-Config-Data-Plugin DataConfigSystem
```

2. Regenerate project files and build the project.

3. Enable the plugin in `Edit → Plugins → Project → DataConfigSystem`.

---

## Usage

### 1. Configure assets

* Open **Project Settings → Data Configuration Settings**.
* Add the assets that should be globally accessible.

### 2. Blueprint node

* Use the **Async Load Data** node in Blueprints.
* Provide a `GameplayTag`.
* The node will asynchronously load the corresponding asset and return it with automatic type casting.

---

## Authors

[* **Stalker7274 (Roma)**](https://github.com/Stalker72742) — Subsystem & asset loading
[* **PsinaDev (Kim)**](https://github.com/PsinaDev) — K2Node & DeveloperSettings

---

## Support

Issues and feature requests can be submitted here:
[GitHub Issues](https://github.com/PsinaDev/Unreal-Config-Data-Plugin/issues)
