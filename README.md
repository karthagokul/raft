# raft
can analyzer

## Installation

Go to your ubuntu box and run the below command to enable a vcan0 interface
sudo apt-get install can-utils

sudo modprobe vcan
sudo ip link add dev vcan0 type vcan
sudo ip link set up vcan0

 candump -e  any,0:0,#FFFFFFFF
cangen -v vcan0
