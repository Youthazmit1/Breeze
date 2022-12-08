// Import hell


// Formatted in setup()
static Engine *engine = nullptr;
static ProjectSettings *global = nullptr;
static Input *input = nullptr;
static InputMap *input_map = nullptr;
static TranslationServer *translation_server = nullptr;
static Performance *performance = nullptr;
static PackedData *packed_data = nullptr;
static Time *time_singleton = nullptr;

#ifdef MINIZIP_ENABLED
static ZipArchive *zip_packed_data = nullptr;
#endif

static FileAccessNetworkClient *file_access_network_client = nullptr;
static MessageQueue *message_queue = nullptr;

// Formatted in setup2()
static AudioServer *audio_server = nullptr;
static DisplayServer *display_server = nullptr;
static RenderingServer *rendering_server = nullptr;
static CameraServer *camera_server = nullptr;
static XrServer *xr_server = nullptr;
static TextServerManager *tsman = nullptr;
static PhysicsServer3DManager *physics_server_3d_manager = nullptr;
static PhysicsServer3D *physics_server_3d = nullptr;
static PhysicsServer2DManager *physics_server_2d_manager = nullptr;
static PhysicsServer2D *physics_server_2d = nullptr;
static NavigationServer3D *navigation_server_3d = nullptr;
static NavigationServer2D *navigation_server_2d = nullptr;
static ThemeDb *theme_db = nullptr;

// Errors out if setup2() doesn't turn this true
static bool _start_success = false;

// Drivers
