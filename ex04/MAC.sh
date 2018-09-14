#!/usr/bin/env bash

ifconfig | grep ether | cut -d " " -f 2
