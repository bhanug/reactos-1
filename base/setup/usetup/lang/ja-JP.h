#pragma once

MUI_LAYOUTS jaJPLayouts[] =
{
//    { L"0411", L"e0010411" },
    { L"0411", L"00000411" },
    { NULL, NULL }
};

static MUI_ENTRY jaJPLanguagePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��ݺ�� ����",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  �ݽİټ�� �ֳ�� ��ݺަ ���� �� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   ·�Ƥ ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  ���� ���� �� ��ݺ�� �����÷� ����� �ò� ��ݺ�� ��ò��Ͻ�",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��  F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPWelcomePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS ��ı���� ֳ��",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "�� ��ı���� ��ݶ���� ReactOS ���ڰèݸ޼��Ѧ",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "���߭��� ��߰�� ��ı���� ·�� ��ݶ��� �ޭ��ަ �Ͻ�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press ENTER to install or upgrade ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  ReactOS � ���̸ Ӽ�� ���� ���� R ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  ReactOS � ײ�ݽ�ޮ��ݦ ˮ��� ���� L ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ReactOS � �ݽİ� ���� ������ �ޱ�� F3 ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "ReactOS � ������ �ޮ�γ� �ݼ�� ��� ���� ��޻�:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "http://www.reactos.org",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "ENTER = �ޯ��  R = ���̸  L = ײ�ݽ  F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPIntroPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Version Status",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "ReactOS is in Alpha stage, meaning it is not feature-complete",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "and is under heavy development. It is recommended to use it only for",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "evaluation and testing purposes and not as your daily-usage OS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "Backup your data or test on a secondary computer if you attempt",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "to run ReactOS on real hardware.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ENTER to continue ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Continue   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLicensePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "�ֳ ���޸:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "�� ReactOS ����� �бܾ �ɳ� ײ�ݽ(X11 ԤBSD ����",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "GNU LGPL ײ�ݽ ���)� ���ަ ̸� �߰�� ��� GNU GPL �",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "�ޮ���� ��� ײ�ݽ ��òϽ�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "ReactOS ����� ����� ��ĳ��� ����� ReactOS ����� ������",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "��մ� GNU GPL �޹��Ÿ� �� ��ĳ��� �ؼ��� ײ�ݽ� ����",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "�ذ� ��� �Ͻ�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "�� ��ĳ��� '�μ��'�� ó��� �ڤ ���γ� ����γ�� ÷�����",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "�ޱ�� ɿ޲ä �ֳ ����ݦ ��Ͻ� ReactOS � ײ�ݽ �����",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "�޲�ݼ��� ���޲� ̾�� �޹�޽�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "GNU General Public License � ReactOS � ��� ����Ŷ��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "�ޱ�ʤ ·ަ �޻ݼ�� ��޻�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        22,
        "�ݼ� μ��:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        24,
        "��� �ذ ��ĳ���޽� ������ ���� ��߰�ޮ��ݦ ���� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "μ��� ϯ�� '��Ͼ�'� '��ޮ���' � '÷�޳��'",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        26,
        "Ƶ��� �޳ֳ�޽�",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDevicePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��� ؽ�� ��ݻ޲� ���޲� ��ò�޽�",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "���߭��:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "�ި���ڲ:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "���ް��:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "���ް�� ڲ���:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "�ޭ�޸:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16, "���� ���޲�� ��ò� �ޭ�޸ ��",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "UP Ӽ�� DOWN ��� ��� ���ذ� ���� �� �����",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "ʰ�޳��� ��ò� �ݺ� �޷Ͻ� ���� ��פ ENTER ��� ��� ÷��� ��ò�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "���� �Ͻ�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "���� ��ò�� ���� ��޼� �ޱ�ʤ \"���� ���޲�� ��ò� �ޭ�޸ ��\" � ���� �ä",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPRepairPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS ��ı���� ������� ��ݶ�� ��Ͻ� ���Ҥ ���",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "�ޭ����� �ֳ �޷� ��ı��� ���ع����� ����� �ɳ� ��߰� ��Ͼݡ",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "���̸�ɳ� ��� �ޯ�� ��� �Ͼݡ",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  OS � ���� ���� U ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  ��̸ �ݿ�٦ �׸�� R ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Ҳ��߰��� ������ ESC ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ���߭��� ����޳ ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = Ҳ��߰��  U = ����  R = ��̸  ENTER = ����޳",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPUpgradePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "The ReactOS Setup can upgrade one of the available ReactOS installations",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "listed below, or, if a ReactOS installation is damaged, the Setup program",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "can attempt to repair it.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "The repair functions are not all implemented yet.",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        15,
        "\x07  Press UP or DOWN to select an OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press U for upgrading the selected OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ESC to continue with a new installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "U = Upgrade   ESC = Do not upgrade   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPComputerPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "�ݽİ� ��� ���߭��� ��ٲ� �ݺ� �� �Ķ� ���� ��ϼ��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  UP Ӽ�� DOWN ��� ��� ÷�� ���߭��� ��ٲ� ���� �� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  ���߭��� ��ٲ� �ݺ����� ϴ� �߰��� ���� �ޱ�� ESC ���",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFlushPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "����� ������ ����� �ް��� �ި���ޮ�� ο�� ��� ֳ� �òϽ",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "���� ������ �޶ݶ� ��� �ޱ��� ��Ͻ",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "��خ��ޤ ���߭��� ���޳�� ����޳ ��Ͻ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "������ ����� �� �Ͻ",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPQuitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS � �ݾ��� �ݽİ� ��Ͼ��޼�",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "��ײ�� A: �� �ۯ�߰ �ި��� CD ��ײ�޶�",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "����� CD-ROM � ���޼� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "���߭��� ����޳ ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "��� ��޻� ...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDisplayPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "�ݽİ� ��� �ި���ڲ� ��ٲ� �ݺ� �� �Ķ� ���� ��ϼ��",
        TEXT_STYLE_NORMAL
    },
    {   8,
        10,
         "\x07  UP Ӽ�� DOWN ��� ��� ÷�� �ި���ڲ� ��ٲ� ���� �� ��޻��",
         TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  �ި���ڲ� ��ٲ� �ݺ����� ϴ� �߰��� ������ ESC ���",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPSuccessPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS � ��������� �ݽİ�� ���� �ϼ��",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "��ײ�� A: �� �ۯ�߰ �ި��� CD ��ײ�޶�",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "����� CD-ROM � ���޼� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "���߭��� ����޳ ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = ���߭��� ����޳",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPBootPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��ı���� �ް�۰�ަ ���߭��� ʰ���ި���ޮ�� �ݽİ�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "�޷Ͼ��޼�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "��ײ�� A: � ̫�ϯ� ��� �ۯ�߰ �ި��� ��ä",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY jaJPSelectPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��� ؽ�� �ݻ޲�� �߰è���� �ݷ �߰è���� ÷�� мֳ�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "�ި�� ��߰�� �����޽�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  UP Ӽ�� DOWN ��� ��� ؽ� ���ذ� ���� �� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  ������� �߰è���� ReactOS � �ݽİ� ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press P to create a primary partition.",
//        "\x07  ��׼� �߰è��� � ���� ���� C ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press E to create an extended partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press L to create a logical partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ���� �߰è��ݦ ���ޮ ���� D ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "��� ��޻�...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You have chosen to delete the system partition.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "System partitions can contain diagnostic programs, hardware configuration",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "programs, programs to start an operating system (like ReactOS) or other",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "programs provided by the hardware manufacturer.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Delete a system partition only when you are sure that there are no such",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "programs on the partition, or when you are sure you want to delete them.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "When you delete the partition, you might not be able to boot the",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "computer from the harddisk until you finished the ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Press ENTER to delete the system partition. You will be asked",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "   to confirm the deletion of the partition again later.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Press ESC to return to the previous page. The partition will",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "   not be deleted.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER=Continue  ESC=Cancel",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFormatPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "�߰è���� ̫�ϯ�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "��ı���� �߰è��ݦ ̫�ϯ� �Ͻ� �ޯ�� ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY jaJPInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��ı���� ReactOS � ̧�٦ ���� ��� �߰è��ݼޮ�� �ݽİ� �Ͻ� ReactOS �",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "�ݽİٽ� �ިڸ�ئ ��ò �� ��޻�:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "����� �ިڸ�ئ �ݺ����ʤ BACKSPACE ���� Ӽަ ���ޮ �� ��Ƥ",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "ReactOS � �ݽİ� �� �ިڸ�ئ ƭ�خ�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "�� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFileCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        12,
        "ReactOS ��ı��߶� ReactOS �ݽİ� ̫���� ̧�٦",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        13,
        "��߰ �� ���� ���׸ ��� ��޻��",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        14,
        "��خ����� ���� ��� �ޱ��� ��Ͻ�",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 ��� ��޻�...    ",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPBootLoaderEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��ı���� �ް� ۰�ަ �ݽİ� �Ͻ",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "ʰ���ި��� �ް�۰�ް� �ݽİ� �Ͻ (MBR � VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "ʰ���ި��� �ް�۰�ް� �ݽİ� �Ͻ (VBR ��).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "�ް�۰�ަ �ۯ�߰ �ި��� �ݽİ� �١",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "�ް�۰��� �ݽİ٦ ����� �١",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "�ݽİ� ��� ���ް��� ��ٲ� �ݺ� �� �Ķ� ���� ��ϼ��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  UP Ӽ�� DOWN ��� ��� ÷�� ���ް��� ��ٲ� ���� �� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  ���ް��� ��ٲ� �ݺ� ���� ϴ� �߰��� ������ ESC���",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "�ò� ڲ���ļ� �ݽİ� ��� ڲ��Ħ ���� �� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  UP Ӽ�� DOWN ��� ��� ÷�� ���ް�� ڲ��Ħ ���� �ä",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "    ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  ���ް�� ڲ��Ħ �ݺ� ���� ϴ� �߰��� ������ ESC ���",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY jaJPPrepareCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��ı���� ReactOS �̧�٦ ���߭��� ��߰ �� �ޭ��ަ �� �Ͻ� ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "��߰ �� ̧���ؽĦ ���� ���...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY jaJPSelectFSEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "��� ؽĶ� ̧�� ���Ѧ ���� �� ��޻��",
        0
    },
    {
        8,
        19,
        "\x07  UP Ӽ�� DOWN ��� ��� ̧�� ���Ѧ ���� �� ��޻��",
        0
    },
    {
        8,
        21,
        "\x07  �߰è��ݦ ̫�ϯ� ���� ENTER ��� ��� ��޻��",
        0
    },
    {
        8,
        23,
        "\x07  ���� �߰è��ݦ ���� �� �ޱ�� ESC ��� ��� ��޻��",
        0
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },

    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDeletePartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "�� �߰è��ݦ ���ޮ �� �Ķ� ���� ��ϼ�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  �� �߰è��ݦ ���ޮ ���� D ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "����(WARNING): �� �߰è��ݼޮ�� ����� �ް�� �����Ͻ!",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ��ݾ� ���� ESC ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "D = �߰ü�� ���ޮ   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPRegistryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "��ı���� ����� ����� ���� �òϽ� ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ڼ޽�� ʲ�ަ ���� ���...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR jaJPErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Success\n"
    },
    {
        //ERROR_NOT_INSTALLED
        "ReactOS � ���߭��� �ݾ��� �ݽİ�\n"
        "��Ͼݡ ��ı��ߦ ���� �� �ޱ�� ReactOS � �ݽİ� ���� ��ı��ߦ\n"
        "ӳ���� �ޯ�� �� ��ֳ�� ��Ͻ�\n"
        "\n"
        "  \x07  ��ı��ߦ �ޯ�� ���� ENTER ��� ��� ��޻��\n"
        "  \x07  ��ı��ߦ ���� ���� F3 ��� ��� ��޻��",
        "F3 = ����  ENTER = �ޯ��"
    },
    {
        //ERROR_NO_HDD
        "��ı���� ʰ���ި��� �ݼ�� �޷Ͼ� �޼��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_NO_SOURCE_DRIVE
        "��ı���� ��� ��ײ�ަ �ݼ�� �޷Ͼ� �޼��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_LOAD_TXTSETUPSIF
        "��ı���� ̧�� TXTSETUP.SIF � �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CORRUPT_TXTSETUPSIF
        "��ı����  TXTSETUP.SIF �� ʿ� �ò� �Ħ �ݼ�� �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_SIGNATURE_TXTSETUPSIF,
        "��ı���� TXTSETUP.SIF � Ѻ�� ��Ҳ� �ݼ�� �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_DRIVE_INFORMATION
        "��ı���� ���� ��ײ��� �ޮ�γ� ���� �޷Ͼ� �޼��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_WRITE_BOOT,
        "��ı���� ���� �߰è��� �ޮ��� FAT �ްĺ���� �ݽİ�� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_LOAD_COMPUTER,
        "��ı���� ���߭��� ��ٲ ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_LOAD_DISPLAY,
        "��ı���� �ި���ڲ� ��ò ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_LOAD_KEYBOARD,
        "��ı���� ���ް��� ��ٲ ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_LOAD_KBLAYOUT,
        "��ı���� ���ް�� ڲ��� ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_WARN_PARTITION,
          "��ı���� ��Ÿ�� 1�� ʰ���ި���� ÷��� �¶�Ų �޶ݾ�� Ų\n"
          "�߰è��� ð��٦ ̸� �Ħ �ݼ�� �ϼ�!\n"
          "\n"
          "�߰è��ݦ ���� ��� ���ޮ �ä �� �߰è��� ð��٦ ʶ� �޷Ͻ\n"
          "\n"
          "  \x07  ��ı��ߦ ���� ���� F3 ��� ��� ��޻��\n"
          "  \x07  �ޯ�� ���� ENTER ��� ��� ��޻��",
          "F3 = ����  ENTER = �ޯ��"
    },
    {
        //ERROR_NEW_PARTITION,
        "��׼� �߰è��ݦ ���� �ݻ޲��\n"
        "�߰è���� Ų��� ���� �ٺ�� �޷Ͼ�!\n"
        "\n"
        "  * �ޯ�� ���� �ƶ ��� ��� ��޻��",
        NULL
    },
    {
        //ERROR_DELETE_SPACE,
        "���ݶ� � �ި�� ��߰� � ���ޮ �ٺ�� �޷Ͼ�!\n"
        "\n"
        "  * �ޯ�� ���� �ƶ ��� ��� ��޻��",
        NULL
    },
    {
        //ERROR_INSTALL_BOOTCODE,
        "��ı���� ���� �߰è��� �ޮ��� FAT �ް� ں��� � �ݽİ�� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_NO_FLOPPY,
        "��ײ�� A: � �ި���� ��Ͼݡ",
        "ENTER = �ޯ��"
    },
    {
        //ERROR_UPDATE_KBSETTINGS,
        "��ı���� ���ް�� ڲ��� � ��ò� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_UPDATE_DISPLAY_SETTINGS,
        "��ı���� �ި���ڲ� ڼ޽�� ��ò� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_IMPORT_HIVE,
        "��ı���� ʲ�� ̧��� ���߰�� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_FIND_REGISTRY
        "��ı���� ڼ޽�� �ް� ̧��� �ݼ��� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CREATE_HIVE,
        "��ı���� ڼ޽�� ʲ��� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_INITIALIZE_REGISTRY,
        "��ı���� ڼ޽��� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_INVALID_CABINET_INF,
        "����ȯ�� Ѻ�� inf ̧�ٶ� ̸��� �Ͻ�\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CABINET_MISSING,
        "����ȯĶ� �¶�Ͼݡ\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CABINET_SCRIPT,
        "����ȯ�Ų� ��ı��� �����Ķ� �¶�Ͼݡ\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_COPY_QUEUE,
        "��ı���� ��߰ ̧�� ���� ������ ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CREATE_DIR,
        "��ı���� �ݽİ� �ިڸ�ئ ���� �޷Ͼ� �޼��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_TXTSETUP_SECTION,
        "��ı���� TXTSETUP.SIF Ų� 'Directories' ������ �ݻ��\n"
        "���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CABINET_SECTION,
        "��ı���� ����ȯ�Ų� 'Directories' ������ �ݻ��\n"
        "���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_CREATE_INSTALL_DIR
        "��ı���� �ݽİ� �ިڸ�ئ ���� �޷Ͼ� �޼��",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_FIND_SETUPDATA,
        "��ı���� TXTSETUP.SIF Ų� 'SetupData' ������ �ݻ��\n"
        "���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_WRITE_PTABLE,
        "��ı���� �߰è��� ð���� ����� ���߲ �ϼ��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_ADDING_CODEPAGE,
        "��ı���� ڼ޽���� �����߰��� ²�� ���߲ �ϼ��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_UPDATE_LOCALESETTINGS,
        "��ı���� ���� ۹�٦ ��ò �޷Ͼ� �޼��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_ADDING_KBLAYOUTS,
        "��ı���� ڼ޽���� ���ް�� ڲ���� ²�� ���߲ �ϼ��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_UPDATE_GEOID,
        "��ı���� geo id � ��ò �޷Ͼ� �޼��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        //ERROR_DIRECTORY_NAME,
        "Invalid directory name.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        //ERROR_INSUFFICIENT_PARTITION_SIZE,
        "The selected partition is not large enough to install ReactOS.\n"
        "The install partition must have a size of at least %lu MB.\n"
        "\n"
        "  * Press any key to continue.",
        NULL
    },
    {
        //ERROR_PARTITION_TABLE_FULL,
        "You can not create a new primary or extended partition in the\n"
        "partition table of this disk because the partition table is full.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        //ERROR_ONLY_ONE_EXTENDED,
        "You can not create more than one extended partition per disk.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        //ERROR_FORMATTING_PARTITION,
        "Setup is unable to format the partition:\n"
        " %S\n"
        "\n"
        "ENTER = Reboot computer"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE jaJPPages[] =
{
    {
        LANGUAGE_PAGE,
        jaJPLanguagePageEntries
    },
    {
        WELCOME_PAGE,
        jaJPWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        jaJPIntroPageEntries
    },
    {
        LICENSE_PAGE,
        jaJPLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        jaJPDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        jaJPRepairPageEntries
    },
    {
        UPGRADE_REPAIR_PAGE,
        jaJPUpgradePageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        jaJPComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        jaJPDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        jaJPFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        jaJPSelectPartitionEntries
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        jaJPConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        jaJPSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        jaJPFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        jaJPDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        jaJPInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        jaJPPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        jaJPFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        jaJPKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        jaJPBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        jaJPLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        jaJPQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        jaJPSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        jaJPBootPageEntries
    },
    {
        REGISTRY_PAGE,
        jaJPRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING jaJPStrings[] =
{
    {STRING_PLEASEWAIT,
     "   ��� ��޻�..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = Install   P = Create Primary   E = Create Extended   F3 = Quit"},
//     "   ENTER = �ݽİ�   C = �߰è��� ����   F3 = ����"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = Install   L = Create Logical Partition   F3 = Quit"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = �ݽİ�   D = �߰è��� ���ޮ   F3 = ����"},
    {STRING_DELETEPARTITION,
     "   D = Delete Partition   F3 = Quit"},
    {STRING_PARTITIONSIZE,
     "��׼� �߰è���� ����:"},
    {STRING_CHOOSENEWPARTITION,
     "You have chosen to create a primary partition on"},
//     "��׼� �߰è��ݦ ·�� ������ �Ķ� ���� ��ϼ�:"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "You have chosen to create an extended partition on"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "You have chosen to create a logical partition on"},
    {STRING_HDDSIZE,
    "��׼� �߰è���� ���ަ Ҷ��޲� �ݲ�� ƭ�خ� �ø�޻��"},
    {STRING_CREATEPARTITION,
     "   ENTER = �߰è��� ����   ESC = ��ݾ�   F3 = ����"},
    {STRING_PARTFORMAT,
    "�� �߰è���� ·�� üޭ��� ̫�ϯ� ��Ͻ�"},
    {STRING_NONFORMATTEDPART,
    "ReactOS� �ݷ ��� �̫�ϯ�� �߰è���� �ݽİٽ� �Ķ� ���� ��ϼ��"},
    {STRING_NONFORMATTEDSYSTEMPART,
    "The system partition is not formatted yet."},
    {STRING_NONFORMATTEDOTHERPART,
    "The new partition is not formatted yet."},
    {STRING_INSTALLONPART,
    "��ı���� ReactOS� �߰è��� �ޮ�� �ݽİټϽ�"},
    {STRING_CHECKINGPART,
    "��ı���� ���� ��� �߰è��ݦ �ݻ �òϽ�"},
    {STRING_CONTINUE,
    "ENTER = �ޯ��"},
    {STRING_QUITCONTINUE,
    "F3 = ����  ENTER = �ޯ��"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = ���߭��� ����޳"},
    {STRING_TXTSETUPFAILED,
    "��ı���� TXTSETUP.SIF � '%S' ������ �ݼ���\n���߲ �ϼ��\n"},
    {STRING_COPYING,
     "   ��߰ ���� ̧��: %S"},
    {STRING_SETUPCOPYINGFILES,
     "��ı���� ̧�٦ ��߰ �� �Ͻ..."},
    {STRING_REGHIVEUPDATE,
    "   ڼ޽�� ʲ��� ���� ���..."},
    {STRING_IMPORTFILE,
    "   %S � ���߰� ���..."},
    {STRING_DISPLAYETTINGSUPDATE,
    "   �ި���ڲ ڼ޽�� ��ò� ���� ���..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   ��� ��ò� ���� ���..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   ���ް�� ڲ���� ��ò� ���� ���..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   ���� �߰�� � �ޮ�γ� ڼ޽��� ²� ���..."},
    {STRING_DONE,
    "   ��خ�..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = ���߭��� ����޳"},
    {STRING_REBOOTPROGRESSBAR,
    " Your computer will reboot in %li second(s)... "},
    {STRING_CONSOLEFAIL1,
    "�ݿ�٦ ����� �޷Ͼ�\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "�����÷� ��ݲ� ļ� USB ���ް�� � ¶�� �ٺĶ� �ݶ޴�� Ͻ\r\n"},
    {STRING_CONSOLEFAIL3,
    "USB ���ް�� � ��� �ݾ��� ��߰� ��� �Ͼ�\r\n"},
    {STRING_FORMATTINGDISK,
    "��ı���� �ި��� ̫�ϯ� �òϽ"},
    {STRING_CHECKINGDISK,
    "��ı���� �ި��� �ݻ �òϽ�"},
    {STRING_FORMATDISK1,
    " �߰è��ݦ %S ̧�� ���� ��̫�ϯ� (���� ̫�ϯ�) "},
    {STRING_FORMATDISK2,
    " �߰è��ݦ %S ̧�� ���� ��̫�ϯ� "},
    {STRING_KEEPFORMAT,
    " ��ݻ޲� ̧�� ����� �� (�ݺ� �Ų) "},
    {STRING_HDINFOPARTCREATE_1,
    "%I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTCREATE_2,
    "%I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) [%s]."},
    {STRING_HDDINFOUNK2,
    "   %c%c  ��ٲ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE_1,
    "on %I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTDELETE_2,
    "on %I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) [%s]."},
    {STRING_HDINFOPARTZEROED_1,
    "ʰ���ި�� %lu (%I64u %s), �߰�=%hu, �޽=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK4,
    "%c%c  ��ٲ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS_1,
    "on ʰ���ި�� %lu (%I64u %s), �߰�=%hu, �޽=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %s��ٲ %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT_1,
    "%6lu %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) on %wZ [%s]"},
    {STRING_HDINFOPARTSELECT_2,
    "%6lu %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) [%s]"},
    {STRING_NEWPARTITION,
    "��ı���� ��׼� �߰è��ݦ ·�� �����ϼ�:"},
    {STRING_UNPSPACE,
    "    %s���ݶ�� ��߰�%s            %6lu %s"},
    {STRING_MAXSIZE,
    "MB (���޲. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Extended Partition"},
    {STRING_UNFORMATTED,
    "�ݷ (�̫�ϯ�)"},
    {STRING_FORMATUNUSED,
    "мֳ"},
    {STRING_FORMATUNKNOWN,
    "�Ҳ"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "���ް�� ڲ���� ²� ���"},
    {0, 0}
};
