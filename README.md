# Node Mango App Starter
Starter script for managing nodejs app with local mongodb

---

## Require

* [Mongodb](http://www.mongodb.org)
* [Nodemon](http://nodemon.io)

## Usage

### conf.inc
Parameters for the application

```
APP_TAG="App"      <== A label to distinguish the managed apps
MONGO_PORT=20000   <== TCP port mongodb service listening on
DATA_FOLDER="data" <== Folder to store mongodb data
LOGS_FOLDER="logs" <== Folder to stoer log files
```

### run
The starter script to run and manage app using nodemon

```
./run       <== Run app in frontend
./run start <== Run app in background (daemon mode)
./run stop  <== Stop the daemon process
```


### mongodb
The starter script to run and manage mongod service for application

```
./mongodb        <== start mongodb service for app
./mongodb stop   <== stop mongodb service for app
```
