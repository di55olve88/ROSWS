killall udhcpd
ifconfig ath0 down
iwconfig ath0 mode managed essid dronenet
ifconfig ath0 192.168.1.11 netmask 255.255.255.0 up
