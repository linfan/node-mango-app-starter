# Node Mango App Starter
Starter script for managing nodejs app with local mongodb

---

## Require

* [Mongodb](http://www.mongodb.org)
* [Redis](http://redis.io/))
* [Nodemon](http://nodemon.io)

## Usage

### conf.inc
Parameters for the application

```
# APP
APP_ENTRY="bin/www"      <== Specify entry file of the application
APP_TAG="App"            <== A label to distinguish the managed apps
LOGS_FOLDER="logs"       <== Folder to stoer log files

# MONGO
MONGO_ENABLED=true       <== Switch of mongodb service 
MONGO_PORT=27017         <== TCP port mongodb service listening on
DATA_FOLDER="data"       <== Folder to store mongodb data
TEST_MONGO_PORT=30000    <== TCP port mongodb service listening on for unit test
TEST_DATA_FOLDER="data"  <== Folder to store mongodb data for unit test

# REDIS
REDIS_ENABLED=true       <== Switch of redis service
REDIS_PORT=6379          <== TCP port redis service listening on
```

### run
The starter script to run and manage app using nodemon

```
./run       <== Run app in frontend
./run start <== Run app in background (daemon mode)
./run stop  <== Stop the daemon process
```

### mongodb
The starter script to run and manage mongod service for application and unit test

```
./mongodb            <== start mongodb service for app
./mongodb stop       <== stop mongodb service for app
./mongodb test       <== stop mongodb service for test
./mongodb stop test  <== stop mongodb service for test
./mongodb status     <== show status of mongodb for app and test
```

### redis
The starter script to run and manage redis service for application

```
./redis        <== start redis service
./redis stop   <== stop redis service
./redis status <== show status of redis
```
