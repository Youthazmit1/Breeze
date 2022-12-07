// Import hell


// Started in setup()
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
