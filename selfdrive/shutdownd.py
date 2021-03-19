#!/usr/bin/env python3

import os
import time
import cereal.messaging as messaging


def main():
  shutdown_at = 30 * 1
  shutdown_count = 0
  device_state_sock = messaging.sub_sock('deviceState')

  while 1:
    msg = messaging.recv_sock(device_state_sock, wait=True)
    if not msg.deviceState.started and not msg.deviceState.usbOnline:
      shutdown_count += 10
    else:
      shutdown_count = 0

    print('current', shutdown_count, 'shutdown_at', shutdown_at)

    if shutdown_count >= shutdown_at > 0:
      os.system('LD_LIBRARY_PATH="" svc power shutdown')

    time.sleep(10)


if __name__ == "__main__":
  main()