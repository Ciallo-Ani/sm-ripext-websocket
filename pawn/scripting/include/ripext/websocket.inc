typedef WebSocket_ReadCallback = function void (WebSocket ws, JSON data, any value);
typedef WebSocket_ConnectCallback = function void (WebSocket ws, any value);

enum WebSocket_Protocol
{
	WebSocket_JSON
}

methodmap WebSocket < Handle
{
	public native WebSocket(const char[] url);
	public static native WebSocket Create(const char[] address, const char[] path, int port = 80);
	public static native WebSocket CreateSSL(const char[] address, const char[] path, int port = 443);
	public native void SetHeader(const char[] header, const char[] value);
	public native void Connect();
	public native void Close();
	public native void SetReadCallback(WebSocket_Protocol protocol, WebSocket_ReadCallback callback, any value = 0);
	public native void SetConnectCallback(WebSocket_ConnectCallback callback, any value = 0);
	public native void SetDisconnectCallback(WebSocket_ConnectCallback callback, any value = 0);
	public native void Write(JSON data);
}
