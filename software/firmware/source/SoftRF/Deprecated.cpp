/*
 * Deprecated.cpp
 * Copyright (C) 2016-2017 Linar Yusupov
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#if 0
//how many clients should be able to telnet to this ESP8266
#define MAX_SRV_CLIENTS 1
WiFiServer GNSSserver(23);
WiFiClient serverClients[MAX_SRV_CLIENTS];
#endif


#if 0
void WiFi_forward_to_argus()
{
    char str_lat[16];
    char str_lon[16];

    dtostrf(fo.latitude, 8, 4, str_lat);
    dtostrf(fo.longitude, 8, 4, str_lon);

    Udp.beginPacket(ARGUS_HOSTNAME, ARGUS_PORT);

    snprintf(UDPpacketBuffer, sizeof(UDPpacketBuffer), "%u %X %s %s %d %s %s %u", \
      fo.timestamp * 1000, fo.addr, str_lat, str_lon, fo.altitude, "0" , "0" , TypeADSB );

#ifdef SERIAL_VERBOSE
    Serial.println(UDPpacketBuffer);
#endif

    Udp.write(UDPpacketBuffer, strlen(UDPpacketBuffer));
    Udp.endPacket();
}
#endif

#if 0
// FLRDDE626>APRS,qAS,EGHL:/074548h5111.32N/00102.04W'086/007/A=000607 id0ADDE626 -019fpm +0.0rot 5.5dB 3e -4.3kHz
void WiFi_forward_to_cloud() {
  tmElements_t tm;
  char str_lat[8];
  char str_lon[8];

  breakTime(fo.timestamp, tm);

  dtostrf_workaround(take_minutes(fo.latitude), 5, 2, str_lat);
  dtostrf_workaround(take_minutes(fo.longitude), 5, 2, str_lon);

  //Serial.print(fo.latitude); Serial.print(" "); Serial.println(fo.longitude); 

  snprintf(UDPpacketBuffer, sizeof(UDPpacketBuffer), \
    "FLR%X>APRS,qAS,%s:/%02d%02d%02dh%02d%s%s/%03d%s%s/A=%05u TS:%d RAW:%s", \
    fo.addr, STATION_ID, tm.Hour, tm.Minute, tm.Second, \
    abs(take_degrees(fo.latitude)), str_lat, (fo.latitude < 0 ? "S" : "N"), \
    abs(take_degrees(fo.longitude)), str_lon, (fo.longitude < 0 ? "W" : "E"), \
    fo.altitude, fo.timestamp, fo.raw.c_str() );

#ifdef SERIAL_VERBOSE
  Serial.println(UDPpacketBuffer);
#endif

  client.println(UDPpacketBuffer);
}
#endif

#if 0
bool Import()
{
  void *answer = WiFi_relay_from_android();
  if (answer != NULL)
  {
    memcpy(RxBuffer, (unsigned char*) answer, PKT_SIZE);
    return true;
  } else {
    return false;
  }
}
#endif

#if 0
void *WiFi_relay_from_android()
{
  int noBytes = Uni_Udp.parsePacket();
  if ( noBytes ) {
#if 0
    Serial.print(millis() / 1000);
    Serial.print(":Packet of ");
    Serial.print(noBytes);
    Serial.print(" received from ");
    Serial.print(Uni_Udp.remoteIP());
    Serial.print(":");
    Serial.println(Udp.remotePort());
#endif
    // We've received a packet, read the data from it
    Uni_Udp.read(UDPpacketBuffer,noBytes); // read the packet into the buffer
#if 0
    // display the packet contents in HEX
    for (int i=1;i<=noBytes;i++){
      Serial.print(UDPpacketBuffer[i-1],HEX);
      if (i % 32 == 0){
        Serial.println();
      }
      else Serial.print(' ');
    } // end for
    Serial.println();
#endif
    return UDPpacketBuffer;
  } else {
    return NULL;
  }  // end if
}
#endif


/* bridge_loop */
#if 0
  void *answer = WiFi_relay_from_android();
  if ((answer != NULL) && (settings->txpower != NRF905_TX_PWR_OFF) )
  {
    memcpy(TxBuffer, (unsigned char*) answer, PKT_SIZE);

    // Make data
    char *data = (char *) TxBuffer;

    // Set address of device to send to
    byte addr[] = TXADDR;
    nRF905_setTXAddress(addr);

    // Set payload data
    nRF905_setData(data, NRF905_PAYLOAD_SIZE );

    // Send payload (send fails if other transmissions are going on, keep trying until success)
    while (!nRF905_send()) {
      delay(0);
    } ;
    if (settings->nmea_p) {
      StdOut.print(F("$PSRFO,")); StdOut.print(now()); StdOut.print(F(",")); StdOut.println(Bin2Hex((byte *) data));
    }

    tx_packets_counter++;
    TxTimeMarker = millis();
  }
#endif