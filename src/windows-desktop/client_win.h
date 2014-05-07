/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
*/

#ifndef client_win_h__
#define client_win_h__

#include "common/client.h"
#include "common/logging.h"

class Client_Win : public Client
{
public:
  Client_Win();
  virtual ~Client_Win();

  virtual bool OnKeyEvent( CefRefPtr<CefBrowser> browser, const CefKeyEvent& event, CefEventHandle os_event ) OVERRIDE;

  virtual void toggleFullScreen(CefWindowHandle window, bool visible) OVERRIDE;

private:

  struct WindowInfo
  {
    BOOL maximized;
    DWORD style;
    DWORD ex_style;
    RECT rect;
  } _savedWindowInfo;

  IMPLEMENT_REFCOUNTING(Client_Win);

  DECLARE_LOGGER(Client_Win);

  

};

#endif // client_win_h__
