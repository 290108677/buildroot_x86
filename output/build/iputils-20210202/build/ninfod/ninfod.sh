#!/bin/sh

NINFOD=/usr/sbin/ninfod
PID=/var/run/ninfod.pid

[ -x "$NINFOD" ] || exit 0

case "$1" in
    start)
	printf "Starting node information daemon: ninfod"
	$NINFOD
	echo "."
	;;
    stop)
	printf "Stopping node information daemon: ninfod"
	kill `cat $PID`
	echo "."
	;;
    restart)
	printf "Restarting node information daemon: ninfod"
	kill `cat $PID`
	$NINFOD
	echo "."
	;;
    *)
	echo "Usage: /etc/init.d/ninfod {start|stop|restart}"
	exit 1
	;;
esac

exit 0
