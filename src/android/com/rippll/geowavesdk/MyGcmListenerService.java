package com.rippll.geowavesdk;

import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.os.Bundle;

import com.google.android.gms.gcm.GcmListenerService;

import rippll.geowavelibrary.Geowave;

public class MyGcmListenerService extends GcmListenerService {

    @Override
    public void onMessageReceived(String from, Bundle data) {
        PackageManager pm = getApplicationContext().getPackageManager();

        Intent launchIntent = pm.getLaunchIntentForPackage(getApplicationContext().getPackageName());

        String className = launchIntent.getComponent().getClassName();
        
        try {
			Geowave.notificationReceived(data, getApplicationContext(), Class.forName(className), getApplicationContext().getResources().getIdentifier("icon", "drawable", getApplicationContext().getPackageName()), getApplicationContext().getResources().getIdentifier("icon", "drawable", getApplicationContext().getPackageName()), Color.GRAY, getApplicationContext().getString(getApplicationContext().getResources().getIdentifier("app_name", "string", getApplicationContext().getPackageName())));
    	} catch (ClassNotFoundException exception) {

        }
    }
}
