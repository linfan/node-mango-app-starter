#!/bin/bash

function app_already_running()
{
    APP="${*}"
    COUNT=$(ps aux | grep "\b${APP}\b" | grep -v grep | wc | awk '{print $1}')
    echo "${COUNT}"
    return ${COUNT}
}

function app_installed()
{
    APP="${1}"
    COUNT=$(which "${APP}" | grep -v "not found" | wc | awk '{print $1}')
    echo "${COUNT}"
    return ${COUNT}
}
