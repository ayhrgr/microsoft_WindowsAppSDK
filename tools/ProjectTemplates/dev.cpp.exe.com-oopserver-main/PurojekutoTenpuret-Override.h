// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifdef PR_PUROJEKUTOTENPURET_LIBID_UUID
#undef PR_PUROJEKUTOTENPURET_LIBID_UUID
#define PR_PUROJEKUTOTENPURET_LIBID_UUID        LIBID-00000000-0000-0000-0000-000000000000
#endif

#ifdef PR_PUROJEKUTOTENPURET_CLSID_UUID
#undef PR_PUROJEKUTOTENPURET_CLSID_UUID
#define PR_PUROJEKUTOTENPURET_CLSID_UUID        CLSID-UUID-00000000-0000-0000-0000-000000000000
#endif

#ifdef PR_PUROJEKUTOTENPURET_CLSID_STRING
#undef PR_PUROJEKUTOTENPURET_CLSID_STRING
#define PR_PUROJEKUTOTENPURET_CLSID_STRING      _STRINGIZE(PR_PUROJEKUTOTENPURET_CLSID_UUID)
#endif

#ifdef PR_PUROJEKUTOTENPURET_CLSID_GUID
#undef PR_PUROJEKUTOTENPURET_CLSID_GUID
#define PR_PUROJEKUTOTENPURET_CLSID_GUID        CLSID-GUID-0x00000000, 0x0000, 0x0000, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#endif