#!/bin/bash

cat /proc/$$/oom_score
cat /proc/$$/oom_score_adj
sudo echo 100 > /proc/$$/oom_score_adj
cat /proc/$$/oom_score
sudo echo -30 > /proc/$$/oom_score_adj
cat /proc/$$/oom_score
sudo echo 0 > /proc/$$/oom_score_adj
cat /proc/$$/oom_score