package com.rippll.geowavesdk;

import android.graphics.Color;

import org.apache.cordova.CallbackContext;
import org.apache.cordova.CordovaPlugin;

import org.json.JSONArray;
import org.json.JSONObject;

import rippll.geowavelibrary.Geowave;

public class GeowavePlugin extends CordovaPlugin {
    public static final String INIT_WITH_APPID_AND_SENDERID = "initWithAppIDAndSenderID";

    @Override
    public boolean execute(String action, JSONArray args, CallbackContext callbackContext) {
        try {
            if (INIT_WITH_APPID_AND_SENDERID.equals(action)) {
                JSONObject object = args.getJSONObject(0);

                Geowave.getInstance().onCreate(object.getString("appID"), object.getString("senderID"), this.cordova.getActivity(), this.cordova.getActivity().getApplicationContext(), this.cordova.getActivity().getApplication());
            
                callbackContext.success();

                return true;
            }
            
            callbackContext.error("Invalid action");

            return false;
        } catch(Exception exception) {
            callbackContext.error(exception.getMessage());

            return false;
        }
    }
}