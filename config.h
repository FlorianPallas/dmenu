// Appearance
static int topbar = 1;
static const char *fonts[] = { "monospace:size=10" };

// Colors
static const char col_gray1[] = "#212121";
static const char col_gray2[] = "#424242";
static const char col_gray3[] = "#bdbdbd";
static const char col_gray4[] = "#e0e0e0";
static const char col_prime[] = "#6200ea";

// Themes
static const char *colors[SchemeLast][2] = {
  [SchemeNorm] = { col_gray3, col_gray1 },
  [SchemeSel] = { col_gray4, col_prime },
  [SchemeOut] = { col_gray4, col_prime },
};

// Misc
static unsigned int lines = 0;
static const char *prompt = NULL;
static const char worddelimiters[] = " ";
